// $Id$

be_visitor_operation_direct_proxy_impl_ss::
be_visitor_operation_direct_proxy_impl_ss (be_visitor_context *ctx)
  : be_visitor_operation (ctx)
{
}

be_visitor_operation_direct_proxy_impl_ss::
~be_visitor_operation_direct_proxy_impl_ss (void)
{
}

int
be_visitor_operation_direct_proxy_impl_ss::visit_operation (
    be_operation *node
  )
{
  TAO_OutStream *os = this->ctx_->stream ();

  // We need the interface node in which this operation was defined. However,
  // if this operation node was an attribute node in disguise, we get this
  // information from the context.
  be_interface *intf = this->ctx_->attribute ()
    ? be_interface::narrow_from_scope (this->ctx_->attribute ()->defined_in ())
    : be_interface::narrow_from_scope (node->defined_in ());

  if (!intf)
    {
      ACE_ERROR_RETURN ((LM_ERROR,
                         "(%N:%l) be_visitor_operation_direct_collocated_ss::"
                         "visit_operation - "
                         "bad interface scope\n"),
                        -1);
    }

  *os << "// TAO_IDL - Generated from " << be_nl
      << "// " << __FILE__ << ":" << __LINE__ << be_nl << be_nl;

  *os << "void" << be_nl
      << intf->full_direct_proxy_impl_name () << "::";

  // Check if we are an attribute node in disguise.
  if (this->ctx_->attribute ())
    {
      // Now check if we are a "get" or "set" operation.
      if (node->nmembers () == 1)
        {
          *os << "_set_";
        }
      else
        {
          *os << "_get_";
        }
    }

  *os << node->local_name () << " (" << be_idt << be_idt_nl
      << "TAO_Abstract_ServantBase  *servant," << be_nl
      << "TAO::Argument **";

  if (!node->void_return_type () || node->nmembers () > 0)
    {
      *os << " args";
    }

  *os << "," << be_nl
      << "int" << be_uidt_nl
      << ")";

  *os << be_uidt_nl
      << "{" << be_idt_nl;

#if 0
      << "TAO::Portable_Server::Servant_Upcall servant_upcall ("
      << be_idt << be_idt_nl
      << "obj->_stubobj ()"
      << "->servant_orb_var ()->orb_core ()"
      << be_uidt_nl
      << ");" << be_uidt_nl << be_nl;
#endif /*if 0*/

  if (!node->void_return_type ())
    {
      *os << "((TAO::Arg_Traits< ";

      this->gen_arg_template_param_name (node,
                                         node->return_type (),
                                         os);

      *os << ">::ret_val *) args[0])->arg () =" << be_idt_nl;
    }

  *os << "dynamic_cast<" << be_idt
      << intf->full_skel_name () << "_ptr>" << be_nl << "("
      << "servant)" << be_uidt_nl;

  be_visitor_context ctx;

  if (this->gen_invoke (ctx, node) == -1)
    {
      return -1;
    }

  if (!node->void_return_type ())
    {
      *os << be_uidt;
    }

  *os << be_uidt << be_uidt_nl;

  *os << be_uidt_nl
      << "}" << be_nl;

  return 0;
}



int
be_visitor_operation_direct_proxy_impl_ss::gen_invoke (
    be_visitor_context & /*ctx*/,
    be_operation *node
  )
{
  TAO_OutStream *os = this->ctx_->stream ();

  *os << "->" << node->local_name () << " ("
      << be_idt << be_idt << be_idt;

  UTL_ScopeActiveIterator si (node,
                              UTL_Scope::IK_decls);

  if (si.is_done ())
    {
      *os << be_uidt_nl
          << ");";

      return 0;
    }

  AST_Argument *arg = 0;
  int index = 1;

  for (; !si.is_done (); si.next (), ++index)
    {
      arg = AST_Argument::narrow_from_decl (si.item ());

      *os << (index == 1 ? "" : ",") << be_nl
          << "((TAO::Arg_Traits< ";

      this->gen_arg_template_param_name (arg,
                                         arg->field_type (),
                                         os);

      *os << ">::";

      switch (arg->direction ())
        {
          case AST_Argument::dir_IN:
            *os << "in";
            break;
          case AST_Argument::dir_INOUT:
            *os << "inout";
            break;
          case AST_Argument::dir_OUT:
            *os << "out";
          default:
            break;
        }

      *os << "_arg_val *) args[" << index << "])->arg ()";
    }

  // End the upcall
  *os << be_uidt_nl
      << ");";

  return 0;
}
