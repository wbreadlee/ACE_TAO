// -*- C++ -*-
// $Id$

ACE_INLINE TAO_AMH_DSI_Response_Handler_ptr
TAO_AMH_DSI_Response_Handler::_duplicate (TAO_AMH_DSI_Response_Handler_ptr x)
{
  if (x != 0)
    {
      x->_add_ref ();
    }

  return x;
}

// *************************************************************
// Inline operations for class TAO_AMH_DSI_Response_Handler_var
// *************************************************************

ACE_INLINE
TAO_AMH_DSI_Response_Handler_var::TAO_AMH_DSI_Response_Handler_var (void)
  : ptr_ (TAO_AMH_DSI_Response_Handler::_nil ())
{
}

ACE_INLINE
TAO_AMH_DSI_Response_Handler_var::TAO_AMH_DSI_Response_Handler_var (TAO_AMH_DSI_Response_Handler_ptr p)
  : ptr_ (p)
{}

ACE_INLINE
TAO_AMH_DSI_Response_Handler_var::~TAO_AMH_DSI_Response_Handler_var (void)
{
}

ACE_INLINE TAO_AMH_DSI_Response_Handler_ptr
TAO_AMH_DSI_Response_Handler_var::ptr (void) const
{
  return this->ptr_;
}

ACE_INLINE
TAO_AMH_DSI_Response_Handler_var::TAO_AMH_DSI_Response_Handler_var (const TAO_AMH_DSI_Response_Handler_var &p)
  : ptr_ (TAO_AMH_DSI_Response_Handler::_duplicate (p.ptr ()))
{}

ACE_INLINE TAO_AMH_DSI_Response_Handler_var &
TAO_AMH_DSI_Response_Handler_var::operator= (TAO_AMH_DSI_Response_Handler_ptr p)
{
  CORBA::release (this->ptr_);
  this->ptr_ = p;
  return *this;
}

ACE_INLINE TAO_AMH_DSI_Response_Handler_var &
TAO_AMH_DSI_Response_Handler_var::operator= (const TAO_AMH_DSI_Response_Handler_var &p)
{
  if (this != &p)
  {
    CORBA::release (this->ptr_);
    this->ptr_ = TAO_AMH_DSI_Response_Handler::_duplicate (p.ptr ());
  }
  return *this;
}

ACE_INLINE
TAO_AMH_DSI_Response_Handler_var::operator const TAO_AMH_DSI_Response_Handler_ptr &() const
{
  return this->ptr_;
}

ACE_INLINE
TAO_AMH_DSI_Response_Handler_var::operator TAO_AMH_DSI_Response_Handler_ptr &()
{
  return this->ptr_;
}

ACE_INLINE TAO_AMH_DSI_Response_Handler_ptr
TAO_AMH_DSI_Response_Handler_var::operator-> (void) const
{
  return this->ptr_;
}

ACE_INLINE TAO_AMH_DSI_Response_Handler_ptr
TAO_AMH_DSI_Response_Handler_var::in (void) const
{
  return this->ptr_;
}

ACE_INLINE TAO_AMH_DSI_Response_Handler_ptr &
TAO_AMH_DSI_Response_Handler_var::inout (void)
{
  return this->ptr_;
}

ACE_INLINE TAO_AMH_DSI_Response_Handler_ptr &
TAO_AMH_DSI_Response_Handler_var::out (void)
{
  CORBA::release (this->ptr_);
  this->ptr_ = TAO_AMH_DSI_Response_Handler::_nil ();
  return this->ptr_;
}

ACE_INLINE TAO_AMH_DSI_Response_Handler_ptr
TAO_AMH_DSI_Response_Handler_var::_retn (void)
{
  // yield ownership
  TAO_AMH_DSI_Response_Handler_ptr val = this->ptr_;
  this->ptr_ = TAO_AMH_DSI_Response_Handler::_nil ();
  return val;
}
