// -*- C++ -*-
//
// $Id$

// ****  Code generated by the The ACE ORB (TAO) IDL Compiler ****
// TAO and the TAO IDL Compiler have been developed by:
//       Center for Distributed Object Computing
//       Washington University
//       St. Louis, MO
//       USA
//       http://www.cs.wustl.edu/~schmidt/doc-center.html
// and
//       Distributed Object Computing Laboratory
//       University of California at Irvine
//       Irvine, CA
//       USA
//       http://doc.ece.uci.edu/
// and
//       Institute for Software Integrated Systems
//       Vanderbilt University
//       Nashville, TN
//       USA
//       http://www.isis.vanderbilt.edu/
//
// Information about TAO is available at:
//     http://www.cs.wustl.edu/~schmidt/TAO.html

// TAO_IDL - Generated from
// .\be\be_codegen.cpp:338


#include "MUF_SchedulingC.h"
#include "tao/Typecode.h"
#include "tao/Any_Impl_T.h"
#include "tao/Any_Dual_Impl_T.h"
#include "tao/Fixed_Size_Argument_T.h"
#include "ace/OS_NS_string.h"

#if defined (__BORLANDC__)
#pragma option -w-rvl -w-rch -w-ccc -w-aus -w-sig
#endif /* __BORLANDC__ */

#if !defined (__ACE_INLINE__)
#include "MUF_SchedulingC.i"
#endif /* !defined INLINE */

// TAO_IDL - Generated from
// .\be\be_visitor_arg_traits.cpp:62

// Arg traits specializations.
namespace TAO
{
  
  // TAO_IDL - Generated from
  // .\be\be_visitor_arg_traits.cpp:474

#if !defined (_MUF_SCHEDULING_SCHEDULINGPARAMETER__ARG_TRAITS_CS_)
#define _MUF_SCHEDULING_SCHEDULINGPARAMETER__ARG_TRAITS_CS_
  
  ACE_TEMPLATE_SPECIALIZATION
  class Kokyu_DSRT_Schedulers_Export Arg_Traits<MUF_Scheduling::SchedulingParameter>
    : public
        Fixed_Size_Arg_Traits_T<
            MUF_Scheduling::SchedulingParameter
          >
  {
  };

#endif /* end #if !defined */
};

// TAO_IDL - Generated from
// w:\ace_wrappers\tao\tao_idl\be\be_visitor_typecode/typecode_defn.cpp:284

static const CORBA::Long _oc_MUF_Scheduling_SchedulingParameter[] =
{
    TAO_ENCAP_BYTE_ORDER, // byte order
  43,
  ACE_NTOHL (0x49444c3a), 
  ACE_NTOHL (0x4d55465f), 
  ACE_NTOHL (0x53636865), 
  ACE_NTOHL (0x64756c69), 
  ACE_NTOHL (0x6e672f53), 
  ACE_NTOHL (0x63686564), 
  ACE_NTOHL (0x756c696e), 
  ACE_NTOHL (0x67506172), 
  ACE_NTOHL (0x616d6574), 
  ACE_NTOHL (0x65723a31), 
  ACE_NTOHL (0x2e300000),  // repository ID = IDL:MUF_Scheduling/SchedulingParameter:1.0
    20,
  ACE_NTOHL (0x53636865), 
  ACE_NTOHL (0x64756c69), 
  ACE_NTOHL (0x6e675061), 
  ACE_NTOHL (0x72616d65), 
  ACE_NTOHL (0x74657200),  // name = SchedulingParameter
  3, // member count
    9,
  ACE_NTOHL (0x64656164), 
  ACE_NTOHL (0x6c696e65), 
  ACE_NTOHL (0x0),  // name = deadline
    CORBA::tk_alias, // typecode kind for typedefs
  56, // encapsulation length
    TAO_ENCAP_BYTE_ORDER, // byte order
    31,
    ACE_NTOHL (0x49444c3a), 
    ACE_NTOHL (0x6f6d672e), 
    ACE_NTOHL (0x6f72672f), 
    ACE_NTOHL (0x54696d65), 
    ACE_NTOHL (0x42617365), 
    ACE_NTOHL (0x2f54696d), 
    ACE_NTOHL (0x65543a31), 
    ACE_NTOHL (0x2e300000),  // repository ID = IDL:omg.org/TimeBase/TimeT:1.0
        6,
    ACE_NTOHL (0x54696d65), 
    ACE_NTOHL (0x54000000),  // name = TimeT
        CORBA::tk_ulonglong,


  33,
  ACE_NTOHL (0x65737469), 
  ACE_NTOHL (0x6d617465), 
  ACE_NTOHL (0x645f696e), 
  ACE_NTOHL (0x69746961), 
  ACE_NTOHL (0x6c5f6578), 
  ACE_NTOHL (0x65637574), 
  ACE_NTOHL (0x696f6e5f), 
  ACE_NTOHL (0x74696d65), 
  ACE_NTOHL (0x0),  // name = estimated_initial_execution_time
    CORBA::tk_alias, // typecode kind for typedefs
  56, // encapsulation length
    TAO_ENCAP_BYTE_ORDER, // byte order
    31,
    ACE_NTOHL (0x49444c3a), 
    ACE_NTOHL (0x6f6d672e), 
    ACE_NTOHL (0x6f72672f), 
    ACE_NTOHL (0x54696d65), 
    ACE_NTOHL (0x42617365), 
    ACE_NTOHL (0x2f54696d), 
    ACE_NTOHL (0x65543a31), 
    ACE_NTOHL (0x2e300000),  // repository ID = IDL:omg.org/TimeBase/TimeT:1.0
        6,
    ACE_NTOHL (0x54696d65), 
    ACE_NTOHL (0x54000000),  // name = TimeT
        CORBA::tk_ulonglong,


  12,
  ACE_NTOHL (0x63726974), 
  ACE_NTOHL (0x6963616c), 
  ACE_NTOHL (0x69747900),  // name = criticality
    CORBA::tk_long,

};

static CORBA::TypeCode _tc_TAO_tc_MUF_Scheduling_SchedulingParameter (
    CORBA::tk_struct,
    sizeof (_oc_MUF_Scheduling_SchedulingParameter),
    (char *) &_oc_MUF_Scheduling_SchedulingParameter,
    0,
    sizeof (MUF_Scheduling::SchedulingParameter)
  );

namespace MUF_Scheduling
{
  ::CORBA::TypeCode_ptr _tc_SchedulingParameter =
    &_tc_TAO_tc_MUF_Scheduling_SchedulingParameter;
}

// TAO_IDL - Generated from 
// w:\ace_wrappers\tao\tao_idl\be\be_visitor_structure/structure_cs.cpp:66

void 
MUF_Scheduling::SchedulingParameter::_tao_any_destructor (
    void *_tao_void_pointer
  )
{
  SchedulingParameter *_tao_tmp_pointer =
    ACE_static_cast (SchedulingParameter *, _tao_void_pointer);
  delete _tao_tmp_pointer;
}

// TAO_IDL - Generated from
// w:\ace_wrappers\tao\tao_idl\be\be_visitor_interface/interface_cs.cpp:60

// Traits specializations for MUF_Scheduling::SchedulingParameterPolicy.

ACE_TEMPLATE_CLASS_MEMBER_SPECIALIZATION 
MUF_Scheduling::SchedulingParameterPolicy_ptr
TAO::Objref_Traits<MUF_Scheduling::SchedulingParameterPolicy>::tao_duplicate (
    MUF_Scheduling::SchedulingParameterPolicy_ptr p
  )
{
  return MUF_Scheduling::SchedulingParameterPolicy::_duplicate (p);
}

ACE_TEMPLATE_CLASS_MEMBER_SPECIALIZATION 
void
TAO::Objref_Traits<MUF_Scheduling::SchedulingParameterPolicy>::tao_release (
    MUF_Scheduling::SchedulingParameterPolicy_ptr p
  )
{
  CORBA::release (p);
}

ACE_TEMPLATE_CLASS_MEMBER_SPECIALIZATION 
MUF_Scheduling::SchedulingParameterPolicy_ptr
TAO::Objref_Traits<MUF_Scheduling::SchedulingParameterPolicy>::tao_nil (void)
{
  return MUF_Scheduling::SchedulingParameterPolicy::_nil ();
}

ACE_TEMPLATE_CLASS_MEMBER_SPECIALIZATION 
CORBA::Boolean
TAO::Objref_Traits<MUF_Scheduling::SchedulingParameterPolicy>::tao_marshal (
    MUF_Scheduling::SchedulingParameterPolicy_ptr p,
    TAO_OutputCDR & cdr
  )
{
  return p->marshal (cdr);
}

// Function pointer for collocation factory initialization.
TAO::Collocation_Proxy_Broker * 
(*MUF_Scheduling__TAO_SchedulingParameterPolicy_Proxy_Broker_Factory_function_pointer) (
    CORBA::Object_ptr obj
  ) = 0;

MUF_Scheduling::SchedulingParameterPolicy::SchedulingParameterPolicy (void)
{}

MUF_Scheduling::SchedulingParameterPolicy::~SchedulingParameterPolicy (void)
{}

void 
MUF_Scheduling::SchedulingParameterPolicy::_tao_any_destructor (void *_tao_void_pointer)
{
  SchedulingParameterPolicy *_tao_tmp_pointer =
    ACE_static_cast (SchedulingParameterPolicy *, _tao_void_pointer);
  CORBA::release (_tao_tmp_pointer);
}

MUF_Scheduling::SchedulingParameterPolicy_ptr
MUF_Scheduling::SchedulingParameterPolicy::_narrow (
    CORBA::Object_ptr _tao_objref
    ACE_ENV_ARG_DECL_NOT_USED
  )
{
  if (CORBA::is_nil (_tao_objref))
    {
      return SchedulingParameterPolicy::_nil ();
    }
  
  SchedulingParameterPolicy_ptr proxy =
    dynamic_cast<SchedulingParameterPolicy_ptr> (_tao_objref);
  
  return SchedulingParameterPolicy::_duplicate (proxy);
}

MUF_Scheduling::SchedulingParameterPolicy_ptr
MUF_Scheduling::SchedulingParameterPolicy::_duplicate (SchedulingParameterPolicy_ptr obj)
{
  if (! CORBA::is_nil (obj))
    {
      obj->_add_ref ();
    }
  
  return obj;
}

CORBA::Boolean
MUF_Scheduling::SchedulingParameterPolicy::_is_a (
    const char *value
    ACE_ENV_ARG_DECL_NOT_USED
  )
{
  if (
      !ACE_OS::strcmp (
          (char *)value,
          "IDL:omg.org/CORBA/Policy:1.0"
        ) ||
      !ACE_OS::strcmp (
          (char *)value,
          "IDL:MUF_Scheduling/SchedulingParameterPolicy:1.0"
        ) ||
      !ACE_OS::strcmp (
          (char *)value,
          "IDL:omg.org/CORBA/LocalObject:1.0"
        ) ||
      !ACE_OS::strcmp (
          (char *)value,
          "IDL:omg.org/CORBA/Object:1.0"
        )
     )
    {
      return 1; // success using local knowledge
    }
  else
    {
      return 0;
    }
}

const char* MUF_Scheduling::SchedulingParameterPolicy::_interface_repository_id (void) const
{
  return "IDL:MUF_Scheduling/SchedulingParameterPolicy:1.0";
}

CORBA::Boolean
MUF_Scheduling::SchedulingParameterPolicy::marshal (TAO_OutputCDR &)
{
  return 0;
}

// TAO_IDL - Generated from
// w:\ace_wrappers\tao\tao_idl\be\be_visitor_typecode/typecode_defn.cpp:284

static const CORBA::Long _oc_MUF_Scheduling_SchedulingParameterPolicy[] =
{
    TAO_ENCAP_BYTE_ORDER, // byte order
  49,
  ACE_NTOHL (0x49444c3a), 
  ACE_NTOHL (0x4d55465f), 
  ACE_NTOHL (0x53636865), 
  ACE_NTOHL (0x64756c69), 
  ACE_NTOHL (0x6e672f53), 
  ACE_NTOHL (0x63686564), 
  ACE_NTOHL (0x756c696e), 
  ACE_NTOHL (0x67506172), 
  ACE_NTOHL (0x616d6574), 
  ACE_NTOHL (0x6572506f), 
  ACE_NTOHL (0x6c696379), 
  ACE_NTOHL (0x3a312e30), 
  ACE_NTOHL (0x0),  // repository ID = IDL:MUF_Scheduling/SchedulingParameterPolicy:1.0
    26,
  ACE_NTOHL (0x53636865), 
  ACE_NTOHL (0x64756c69), 
  ACE_NTOHL (0x6e675061), 
  ACE_NTOHL (0x72616d65), 
  ACE_NTOHL (0x74657250), 
  ACE_NTOHL (0x6f6c6963), 
  ACE_NTOHL (0x79000000),  // name = SchedulingParameterPolicy
  };

static CORBA::TypeCode _tc_TAO_tc_MUF_Scheduling_SchedulingParameterPolicy (
    CORBA::tk_objref,
    sizeof (_oc_MUF_Scheduling_SchedulingParameterPolicy),
    (char *) &_oc_MUF_Scheduling_SchedulingParameterPolicy,
    0,
    sizeof (MUF_Scheduling::SchedulingParameterPolicy)
  );

namespace MUF_Scheduling
{
  ::CORBA::TypeCode_ptr _tc_SchedulingParameterPolicy =
    &_tc_TAO_tc_MUF_Scheduling_SchedulingParameterPolicy;
}

// TAO_IDL - Generated from
// w:\ace_wrappers\tao\tao_idl\be\be_visitor_interface/interface_cs.cpp:60

// Traits specializations for MUF_Scheduling::Scheduler.

ACE_TEMPLATE_CLASS_MEMBER_SPECIALIZATION 
MUF_Scheduling::Scheduler_ptr
TAO::Objref_Traits<MUF_Scheduling::Scheduler>::tao_duplicate (
    MUF_Scheduling::Scheduler_ptr p
  )
{
  return MUF_Scheduling::Scheduler::_duplicate (p);
}

ACE_TEMPLATE_CLASS_MEMBER_SPECIALIZATION 
void
TAO::Objref_Traits<MUF_Scheduling::Scheduler>::tao_release (
    MUF_Scheduling::Scheduler_ptr p
  )
{
  CORBA::release (p);
}

ACE_TEMPLATE_CLASS_MEMBER_SPECIALIZATION 
MUF_Scheduling::Scheduler_ptr
TAO::Objref_Traits<MUF_Scheduling::Scheduler>::tao_nil (void)
{
  return MUF_Scheduling::Scheduler::_nil ();
}

ACE_TEMPLATE_CLASS_MEMBER_SPECIALIZATION 
CORBA::Boolean
TAO::Objref_Traits<MUF_Scheduling::Scheduler>::tao_marshal (
    MUF_Scheduling::Scheduler_ptr p,
    TAO_OutputCDR & cdr
  )
{
  return p->marshal (cdr);
}

// Function pointer for collocation factory initialization.
TAO::Collocation_Proxy_Broker * 
(*MUF_Scheduling__TAO_Scheduler_Proxy_Broker_Factory_function_pointer) (
    CORBA::Object_ptr obj
  ) = 0;

MUF_Scheduling::Scheduler::Scheduler (void)
{}

MUF_Scheduling::Scheduler::~Scheduler (void)
{}

void 
MUF_Scheduling::Scheduler::_tao_any_destructor (void *_tao_void_pointer)
{
  Scheduler *_tao_tmp_pointer =
    ACE_static_cast (Scheduler *, _tao_void_pointer);
  CORBA::release (_tao_tmp_pointer);
}

MUF_Scheduling::Scheduler_ptr
MUF_Scheduling::Scheduler::_narrow (
    CORBA::Object_ptr _tao_objref
    ACE_ENV_ARG_DECL_NOT_USED
  )
{
  if (CORBA::is_nil (_tao_objref))
    {
      return Scheduler::_nil ();
    }
  
  Scheduler_ptr proxy =
    dynamic_cast<Scheduler_ptr> (_tao_objref);
  
  return Scheduler::_duplicate (proxy);
}

MUF_Scheduling::Scheduler_ptr
MUF_Scheduling::Scheduler::_duplicate (Scheduler_ptr obj)
{
  if (! CORBA::is_nil (obj))
    {
      obj->_add_ref ();
    }
  
  return obj;
}

CORBA::Boolean
MUF_Scheduling::Scheduler::_is_a (
    const char *value
    ACE_ENV_ARG_DECL_NOT_USED
  )
{
  if (
      !ACE_OS::strcmp (
          (char *)value,
          "IDL:RTScheduling/Scheduler:1.0"
        ) ||
      !ACE_OS::strcmp (
          (char *)value,
          "IDL:MUF_Scheduling/Scheduler:1.0"
        ) ||
      !ACE_OS::strcmp (
          (char *)value,
          "IDL:omg.org/CORBA/LocalObject:1.0"
        ) ||
      !ACE_OS::strcmp (
          (char *)value,
          "IDL:omg.org/CORBA/Object:1.0"
        )
     )
    {
      return 1; // success using local knowledge
    }
  else
    {
      return 0;
    }
}

const char* MUF_Scheduling::Scheduler::_interface_repository_id (void) const
{
  return "IDL:MUF_Scheduling/Scheduler:1.0";
}

CORBA::Boolean
MUF_Scheduling::Scheduler::marshal (TAO_OutputCDR &)
{
  return 0;
}

// TAO_IDL - Generated from
// w:\ace_wrappers\tao\tao_idl\be\be_visitor_typecode/typecode_defn.cpp:284

static const CORBA::Long _oc_MUF_Scheduling_Scheduler[] =
{
    TAO_ENCAP_BYTE_ORDER, // byte order
  33,
  ACE_NTOHL (0x49444c3a), 
  ACE_NTOHL (0x4d55465f), 
  ACE_NTOHL (0x53636865), 
  ACE_NTOHL (0x64756c69), 
  ACE_NTOHL (0x6e672f53), 
  ACE_NTOHL (0x63686564), 
  ACE_NTOHL (0x756c6572), 
  ACE_NTOHL (0x3a312e30), 
  ACE_NTOHL (0x0),  // repository ID = IDL:MUF_Scheduling/Scheduler:1.0
    10,
  ACE_NTOHL (0x53636865), 
  ACE_NTOHL (0x64756c65), 
  ACE_NTOHL (0x72000000),  // name = Scheduler
  };

static CORBA::TypeCode _tc_TAO_tc_MUF_Scheduling_Scheduler (
    CORBA::tk_objref,
    sizeof (_oc_MUF_Scheduling_Scheduler),
    (char *) &_oc_MUF_Scheduling_Scheduler,
    0,
    sizeof (MUF_Scheduling::Scheduler)
  );

namespace MUF_Scheduling
{
  ::CORBA::TypeCode_ptr _tc_Scheduler =
    &_tc_TAO_tc_MUF_Scheduling_Scheduler;
}

// TAO_IDL - Generated from 
// w:\ace_wrappers\tao\tao_idl\be\be_visitor_structure/any_op_cs.cpp:54

// Copying insertion.
void operator<<= (
    CORBA::Any &_tao_any,
    const MUF_Scheduling::SchedulingParameter &_tao_elem
  )
{
  TAO::Any_Dual_Impl_T<MUF_Scheduling::SchedulingParameter>::insert_copy (
      _tao_any,
      MUF_Scheduling::SchedulingParameter::_tao_any_destructor,
      MUF_Scheduling::_tc_SchedulingParameter,
      _tao_elem
    );
}

// Non-copying insertion.
void operator<<= (
    CORBA::Any &_tao_any,
    MUF_Scheduling::SchedulingParameter *_tao_elem
  )
{
  TAO::Any_Dual_Impl_T<MUF_Scheduling::SchedulingParameter>::insert (
      _tao_any,
      MUF_Scheduling::SchedulingParameter::_tao_any_destructor,
      MUF_Scheduling::_tc_SchedulingParameter,
      _tao_elem
    );
}

// Extraction to non-const pointer (deprecated).
CORBA::Boolean operator>>= (
    const CORBA::Any &_tao_any,
    MUF_Scheduling::SchedulingParameter *&_tao_elem
  )
{
  return _tao_any >>= ACE_const_cast (
      const MUF_Scheduling::SchedulingParameter *&,
      _tao_elem
    );
}

// Extraction to const pointer.
CORBA::Boolean operator>>= (
    const CORBA::Any &_tao_any,
    const MUF_Scheduling::SchedulingParameter *&_tao_elem
  )
{
  return
    TAO::Any_Dual_Impl_T<MUF_Scheduling::SchedulingParameter>::extract (
        _tao_any,
        MUF_Scheduling::SchedulingParameter::_tao_any_destructor,
        MUF_Scheduling::_tc_SchedulingParameter,
        _tao_elem
      );
}

// TAO_IDL - Generated from
// w:\ace_wrappers\tao\tao_idl\be\be_visitor_interface/any_op_cs.cpp:50

ACE_TEMPLATE_SPECIALIZATION
CORBA::Boolean
TAO::Any_Impl_T<MUF_Scheduling::SchedulingParameterPolicy>::to_object (
    CORBA::Object_ptr &_tao_elem
  ) const
{
  _tao_elem = CORBA::Object::_duplicate (this->value_);
  return 1;
}

ACE_TEMPLATE_SPECIALIZATION
CORBA::Boolean
TAO::Any_Impl_T<MUF_Scheduling::SchedulingParameterPolicy>::marshal_value (TAO_OutputCDR &)
{
  return 0;
}

ACE_TEMPLATE_SPECIALIZATION
CORBA::Boolean
TAO::Any_Impl_T<MUF_Scheduling::SchedulingParameterPolicy>::demarshal_value (TAO_InputCDR &)
{
  return 0;
}

// Copying insertion.
void
operator<<= (
    CORBA::Any &_tao_any,
    MUF_Scheduling::SchedulingParameterPolicy_ptr _tao_elem
  )
{
  MUF_Scheduling::SchedulingParameterPolicy_ptr _tao_objptr =
    MUF_Scheduling::SchedulingParameterPolicy::_duplicate (_tao_elem);
  _tao_any <<= &_tao_objptr;
}

// Non-copying insertion.
void
operator<<= (
    CORBA::Any &_tao_any,
    MUF_Scheduling::SchedulingParameterPolicy_ptr *_tao_elem
  )
{
  TAO::Any_Impl_T<MUF_Scheduling::SchedulingParameterPolicy>::insert (
      _tao_any,
      MUF_Scheduling::SchedulingParameterPolicy::_tao_any_destructor,
      MUF_Scheduling::_tc_SchedulingParameterPolicy,
      *_tao_elem
    );
}

CORBA::Boolean
operator>>= (
    const CORBA::Any &_tao_any,
    MUF_Scheduling::SchedulingParameterPolicy_ptr &_tao_elem
  )
{
  return
    TAO::Any_Impl_T<MUF_Scheduling::SchedulingParameterPolicy>::extract (
        _tao_any,
        MUF_Scheduling::SchedulingParameterPolicy::_tao_any_destructor,
        MUF_Scheduling::_tc_SchedulingParameterPolicy,
        _tao_elem
      );
}

// TAO_IDL - Generated from
// w:\ace_wrappers\tao\tao_idl\be\be_visitor_interface/any_op_cs.cpp:50

ACE_TEMPLATE_SPECIALIZATION
CORBA::Boolean
TAO::Any_Impl_T<MUF_Scheduling::Scheduler>::to_object (
    CORBA::Object_ptr &_tao_elem
  ) const
{
  _tao_elem = CORBA::Object::_duplicate (this->value_);
  return 1;
}

ACE_TEMPLATE_SPECIALIZATION
CORBA::Boolean
TAO::Any_Impl_T<MUF_Scheduling::Scheduler>::marshal_value (TAO_OutputCDR &)
{
  return 0;
}

ACE_TEMPLATE_SPECIALIZATION
CORBA::Boolean
TAO::Any_Impl_T<MUF_Scheduling::Scheduler>::demarshal_value (TAO_InputCDR &)
{
  return 0;
}

// Copying insertion.
void
operator<<= (
    CORBA::Any &_tao_any,
    MUF_Scheduling::Scheduler_ptr _tao_elem
  )
{
  MUF_Scheduling::Scheduler_ptr _tao_objptr =
    MUF_Scheduling::Scheduler::_duplicate (_tao_elem);
  _tao_any <<= &_tao_objptr;
}

// Non-copying insertion.
void
operator<<= (
    CORBA::Any &_tao_any,
    MUF_Scheduling::Scheduler_ptr *_tao_elem
  )
{
  TAO::Any_Impl_T<MUF_Scheduling::Scheduler>::insert (
      _tao_any,
      MUF_Scheduling::Scheduler::_tao_any_destructor,
      MUF_Scheduling::_tc_Scheduler,
      *_tao_elem
    );
}

CORBA::Boolean
operator>>= (
    const CORBA::Any &_tao_any,
    MUF_Scheduling::Scheduler_ptr &_tao_elem
  )
{
  return
    TAO::Any_Impl_T<MUF_Scheduling::Scheduler>::extract (
        _tao_any,
        MUF_Scheduling::Scheduler::_tao_any_destructor,
        MUF_Scheduling::_tc_Scheduler,
        _tao_elem
      );
}

