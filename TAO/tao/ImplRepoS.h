/* -*- C++ -*- $Id$ */

// ******  Code generated by the The ACE ORB (TAO) IDL Compiler *******
// TAO and the TAO IDL Compiler have been developed by the Center for
// Distributed Object Computing at Washington University, St. Louis.
//
// Information about TAO is available at:
//                 http://www.cs.wustl.edu/~schmidt/TAO.html

#ifndef _TAO_IDL_IMPLREPOS_H_
#define _TAO_IDL_IMPLREPOS_H_
#include "ace/pre.h"

#include "ImplRepoC.h"
#include "tao/POAC.h"
#include "tao/Servant_Base.h"

#if !defined (ACE_LACKS_PRAGMA_ONCE)
# pragma once
#endif /* ACE_LACKS_PRAGMA_ONCE */

#if defined(_MSC_VER)
#if (_MSC_VER >= 1200)
#pragma warning(push)
#endif /* _MSC_VER >= 1200 */
#pragma warning(disable:4250)
#endif /* _MSC_VER */

TAO_NAMESPACE  POA_ImplementationRepository
{
  class ServerObject;
  typedef ServerObject *ServerObject_ptr;
  class TAO_Export ServerObject :  public virtual PortableServer::ServantBase
  {
  protected:
    ServerObject (void);

  public:
    ServerObject (const ServerObject& rhs);
    virtual ~ServerObject (void);


    virtual CORBA::Boolean _is_a (
        const char* logical_type_id,
        CORBA::Environment &ACE_TRY_ENV =
          TAO_default_environment ()
      );

    virtual void* _downcast (
        const char* logical_type_id
      );

    static void _is_a_skel (
        CORBA::ServerRequest &req,
        void *obj,
        void *context,
        CORBA::Environment &ACE_TRY_ENV =
          TAO_default_environment ()
      );

    static void _non_existent_skel (
        CORBA::ServerRequest &req,
        void *obj,
        void *context,
        CORBA::Environment &ACE_TRY_ENV =
          TAO_default_environment ()
      );

    virtual void _dispatch (
        CORBA::ServerRequest &_tao_req,
        void *_tao_context,
        CORBA::Environment &ACE_TRY_ENV =
          TAO_default_environment ()
      );

    ::ImplementationRepository::ServerObject *_this (
        CORBA::Environment &ACE_TRY_ENV =
          TAO_default_environment ()
      );

    virtual const char* _interface_repository_id (void) const;

    virtual void ping (
        CORBA::Environment &ACE_TRY_ENV =
          TAO_default_environment ()
      )
      ACE_THROW_SPEC ((
        CORBA::SystemException
      )) = 0;

    static void ping_skel (
        CORBA::ServerRequest &_tao_req,
        void *_tao_obj,
        void *_tao_context,
        CORBA::Environment &ACE_TRY_ENV =
          TAO_default_environment ()
      );

    virtual void shutdown (
        CORBA::Environment &ACE_TRY_ENV =
          TAO_default_environment ()
      )
      ACE_THROW_SPEC ((
        CORBA::SystemException
      )) = 0;

    static void shutdown_skel (
        CORBA::ServerRequest &_tao_req,
        void *_tao_obj,
        void *_tao_context,
        CORBA::Environment &ACE_TRY_ENV =
          TAO_default_environment ()
      );


  };


#if !defined (_IMPLEMENTATIONREPOSITORY_SERVEROBJECT___THRU_POA_COLLOCATED_SH_)
#define _IMPLEMENTATIONREPOSITORY_SERVEROBJECT___THRU_POA_COLLOCATED_SH_

  class TAO_Export _tao_thru_poa_collocated_ServerObject     : public virtual ::ImplementationRepository::ServerObject
  {
  public:
    _tao_thru_poa_collocated_ServerObject (
        TAO_Stub *stub
      );
    virtual CORBA::Boolean _is_a(
        const CORBA::Char *logical_type_id,
        CORBA_Environment &ACE_TRY_ENV = TAO_default_environment ()
      );

    virtual CORBA::Boolean _non_existent(
        CORBA_Environment &ACE_TRY_ENV = TAO_default_environment ()
      );

        virtual void ping (
        CORBA::Environment &ACE_TRY_ENV =
          TAO_default_environment ()
      )
      ACE_THROW_SPEC ((
        CORBA::SystemException
      ));

    virtual void shutdown (
        CORBA::Environment &ACE_TRY_ENV =
          TAO_default_environment ()
      )
      ACE_THROW_SPEC ((
        CORBA::SystemException
      ));

  };


#endif /* end #if !defined */


#if defined (ACE_HAS_USING_KEYWORD)
  // TIE class: Refer to CORBA v2.2, Section 20.34.4
  template <class T>
  class TAO_Export ServerObject_tie : public ServerObject
  {
  public:
    ServerObject_tie (T &t);
    // the T& ctor
    ServerObject_tie (T &t, PortableServer::POA_ptr poa);
    // ctor taking a POA
    ServerObject_tie (T *tp, CORBA::Boolean release=1);
    // ctor taking pointer and an ownership flag
    ServerObject_tie (T *tp, PortableServer::POA_ptr poa, CORBA::Boolean release=1);
    // ctor with T*, ownership flag and a POA
    ~ServerObject_tie (void);
    // dtor

    // TIE specific functions
    T *_tied_object (void);
    // return the underlying object
    void _tied_object (T &obj);
    // set the underlying object
    void _tied_object (T *obj, CORBA::Boolean release=1);
    // set the underlying object and the ownership flag
    CORBA::Boolean _is_owner (void);
    // do we own it
    void _is_owner (CORBA::Boolean b);
    // set the ownership

    // overridden ServantBase operations
    PortableServer::POA_ptr _default_POA (
        CORBA::Environment &env =
          TAO_default_environment ()
      );
    void ping (
        CORBA::Environment &ACE_TRY_ENV =
          TAO_default_environment ()
      )
      ACE_THROW_SPEC ((
        CORBA::SystemException
      ));

    void shutdown (
        CORBA::Environment &ACE_TRY_ENV =
          TAO_default_environment ()
      )
      ACE_THROW_SPEC ((
        CORBA::SystemException
      ));

private:
    T *ptr_;
    PortableServer::POA_var poa_;
    CORBA::Boolean rel_;

    // copy and assignment are not allowed
    ServerObject_tie (const ServerObject_tie &);
    void operator= (const ServerObject_tie &);
  };

#endif /* ACE_HAS_USING_KEYWORD */

  class Administration;
  typedef Administration *Administration_ptr;
  class TAO_Export Administration :  public virtual PortableServer::ServantBase
  {
  protected:
    Administration (void);

  public:
    Administration (const Administration& rhs);
    virtual ~Administration (void);


    virtual CORBA::Boolean _is_a (
        const char* logical_type_id,
        CORBA::Environment &ACE_TRY_ENV =
          TAO_default_environment ()
      );

    virtual void* _downcast (
        const char* logical_type_id
      );

    static void _is_a_skel (
        CORBA::ServerRequest &req,
        void *obj,
        void *context,
        CORBA::Environment &ACE_TRY_ENV =
          TAO_default_environment ()
      );

    static void _non_existent_skel (
        CORBA::ServerRequest &req,
        void *obj,
        void *context,
        CORBA::Environment &ACE_TRY_ENV =
          TAO_default_environment ()
      );

    virtual void _dispatch (
        CORBA::ServerRequest &_tao_req,
        void *_tao_context,
        CORBA::Environment &ACE_TRY_ENV =
          TAO_default_environment ()
      );

    ::ImplementationRepository::Administration *_this (
        CORBA::Environment &ACE_TRY_ENV =
          TAO_default_environment ()
      );

    virtual const char* _interface_repository_id (void) const;

    virtual void activate_server (
        const char * server,
        CORBA::Environment &ACE_TRY_ENV =
          TAO_default_environment ()
      )
      ACE_THROW_SPEC ((
        CORBA::SystemException,
        ImplementationRepository::Administration::NotFound,
        ImplementationRepository::Administration::CannotActivate
      )) = 0;

    static void activate_server_skel (
        CORBA::ServerRequest &_tao_req,
        void *_tao_obj,
        void *_tao_context,
        CORBA::Environment &ACE_TRY_ENV =
          TAO_default_environment ()
      );

    virtual void register_server (
        const char * server,
        const ImplementationRepository::StartupOptions & options,
        CORBA::Environment &ACE_TRY_ENV =
          TAO_default_environment ()
      )
      ACE_THROW_SPEC ((
        CORBA::SystemException,
        ImplementationRepository::Administration::AlreadyRegistered
      )) = 0;

    static void register_server_skel (
        CORBA::ServerRequest &_tao_req,
        void *_tao_obj,
        void *_tao_context,
        CORBA::Environment &ACE_TRY_ENV =
          TAO_default_environment ()
      );

    virtual void reregister_server (
        const char * server,
        const ImplementationRepository::StartupOptions & options,
        CORBA::Environment &ACE_TRY_ENV =
          TAO_default_environment ()
      )
      ACE_THROW_SPEC ((
        CORBA::SystemException
      )) = 0;

    static void reregister_server_skel (
        CORBA::ServerRequest &_tao_req,
        void *_tao_obj,
        void *_tao_context,
        CORBA::Environment &ACE_TRY_ENV =
          TAO_default_environment ()
      );

    virtual void remove_server (
        const char * server,
        CORBA::Environment &ACE_TRY_ENV =
          TAO_default_environment ()
      )
      ACE_THROW_SPEC ((
        CORBA::SystemException,
        ImplementationRepository::Administration::NotFound
      )) = 0;

    static void remove_server_skel (
        CORBA::ServerRequest &_tao_req,
        void *_tao_obj,
        void *_tao_context,
        CORBA::Environment &ACE_TRY_ENV =
          TAO_default_environment ()
      );

    virtual void shutdown_server (
        const char * server,
        CORBA::Environment &ACE_TRY_ENV =
          TAO_default_environment ()
      )
      ACE_THROW_SPEC ((
        CORBA::SystemException,
        ImplementationRepository::Administration::NotFound
      )) = 0;

    static void shutdown_server_skel (
        CORBA::ServerRequest &_tao_req,
        void *_tao_obj,
        void *_tao_context,
        CORBA::Environment &ACE_TRY_ENV =
          TAO_default_environment ()
      );

    virtual char * server_is_running (
        const char * server,
        const char * addr,
        ImplementationRepository::ServerObject_ptr server_object,
        CORBA::Environment &ACE_TRY_ENV =
          TAO_default_environment ()
      )
      ACE_THROW_SPEC ((
        CORBA::SystemException,
        ImplementationRepository::Administration::NotFound
      )) = 0;

    static void server_is_running_skel (
        CORBA::ServerRequest &_tao_req,
        void *_tao_obj,
        void *_tao_context,
        CORBA::Environment &ACE_TRY_ENV =
          TAO_default_environment ()
      );

    virtual void server_is_shutting_down (
        const char * server,
        CORBA::Environment &ACE_TRY_ENV =
          TAO_default_environment ()
      )
      ACE_THROW_SPEC ((
        CORBA::SystemException,
        ImplementationRepository::Administration::NotFound
      )) = 0;

    static void server_is_shutting_down_skel (
        CORBA::ServerRequest &_tao_req,
        void *_tao_obj,
        void *_tao_context,
        CORBA::Environment &ACE_TRY_ENV =
          TAO_default_environment ()
      );

    virtual void find (
        const char * server,
        ImplementationRepository::ServerInformation_out info,
        CORBA::Environment &ACE_TRY_ENV =
          TAO_default_environment ()
      )
      ACE_THROW_SPEC ((
        CORBA::SystemException,
        ImplementationRepository::Administration::NotFound
      )) = 0;

    static void find_skel (
        CORBA::ServerRequest &_tao_req,
        void *_tao_obj,
        void *_tao_context,
        CORBA::Environment &ACE_TRY_ENV =
          TAO_default_environment ()
      );

    virtual void list (
        CORBA::ULong how_many,
        ImplementationRepository::ServerInformationList_out server_list,
        ImplementationRepository::ServerInformationIterator_out server_iterator,
        CORBA::Environment &ACE_TRY_ENV =
          TAO_default_environment ()
      )
      ACE_THROW_SPEC ((
        CORBA::SystemException
      )) = 0;

    static void list_skel (
        CORBA::ServerRequest &_tao_req,
        void *_tao_obj,
        void *_tao_context,
        CORBA::Environment &ACE_TRY_ENV =
          TAO_default_environment ()
      );


  };


#if !defined (_IMPLEMENTATIONREPOSITORY_ADMINISTRATION___THRU_POA_COLLOCATED_SH_)
#define _IMPLEMENTATIONREPOSITORY_ADMINISTRATION___THRU_POA_COLLOCATED_SH_

  class TAO_Export _tao_thru_poa_collocated_Administration     : public virtual ::ImplementationRepository::Administration
  {
  public:
    _tao_thru_poa_collocated_Administration (
        TAO_Stub *stub
      );
    virtual CORBA::Boolean _is_a(
        const CORBA::Char *logical_type_id,
        CORBA_Environment &ACE_TRY_ENV = TAO_default_environment ()
      );

    virtual CORBA::Boolean _non_existent(
        CORBA_Environment &ACE_TRY_ENV = TAO_default_environment ()
      );

        virtual void activate_server (
        const char * server,
        CORBA::Environment &ACE_TRY_ENV =
          TAO_default_environment ()
      )
      ACE_THROW_SPEC ((
        CORBA::SystemException,
        ImplementationRepository::Administration::NotFound,
        ImplementationRepository::Administration::CannotActivate
      ));

    virtual void register_server (
        const char * server,
        const ImplementationRepository::StartupOptions & options,
        CORBA::Environment &ACE_TRY_ENV =
          TAO_default_environment ()
      )
      ACE_THROW_SPEC ((
        CORBA::SystemException,
        ImplementationRepository::Administration::AlreadyRegistered
      ));

    virtual void reregister_server (
        const char * server,
        const ImplementationRepository::StartupOptions & options,
        CORBA::Environment &ACE_TRY_ENV =
          TAO_default_environment ()
      )
      ACE_THROW_SPEC ((
        CORBA::SystemException
      ));

    virtual void remove_server (
        const char * server,
        CORBA::Environment &ACE_TRY_ENV =
          TAO_default_environment ()
      )
      ACE_THROW_SPEC ((
        CORBA::SystemException,
        ImplementationRepository::Administration::NotFound
      ));

    virtual void shutdown_server (
        const char * server,
        CORBA::Environment &ACE_TRY_ENV =
          TAO_default_environment ()
      )
      ACE_THROW_SPEC ((
        CORBA::SystemException,
        ImplementationRepository::Administration::NotFound
      ));

    virtual char * server_is_running (
        const char * server,
        const char * addr,
        ImplementationRepository::ServerObject_ptr server_object,
        CORBA::Environment &ACE_TRY_ENV =
          TAO_default_environment ()
      )
      ACE_THROW_SPEC ((
        CORBA::SystemException,
        ImplementationRepository::Administration::NotFound
      ));

    virtual void server_is_shutting_down (
        const char * server,
        CORBA::Environment &ACE_TRY_ENV =
          TAO_default_environment ()
      )
      ACE_THROW_SPEC ((
        CORBA::SystemException,
        ImplementationRepository::Administration::NotFound
      ));

    virtual void find (
        const char * server,
        ImplementationRepository::ServerInformation_out info,
        CORBA::Environment &ACE_TRY_ENV =
          TAO_default_environment ()
      )
      ACE_THROW_SPEC ((
        CORBA::SystemException,
        ImplementationRepository::Administration::NotFound
      ));

    virtual void list (
        CORBA::ULong how_many,
        ImplementationRepository::ServerInformationList_out server_list,
        ImplementationRepository::ServerInformationIterator_out server_iterator,
        CORBA::Environment &ACE_TRY_ENV =
          TAO_default_environment ()
      )
      ACE_THROW_SPEC ((
        CORBA::SystemException
      ));

  };


#endif /* end #if !defined */


#if defined (ACE_HAS_USING_KEYWORD)
  // TIE class: Refer to CORBA v2.2, Section 20.34.4
  template <class T>
  class TAO_Export Administration_tie : public Administration
  {
  public:
    Administration_tie (T &t);
    // the T& ctor
    Administration_tie (T &t, PortableServer::POA_ptr poa);
    // ctor taking a POA
    Administration_tie (T *tp, CORBA::Boolean release=1);
    // ctor taking pointer and an ownership flag
    Administration_tie (T *tp, PortableServer::POA_ptr poa, CORBA::Boolean release=1);
    // ctor with T*, ownership flag and a POA
    ~Administration_tie (void);
    // dtor

    // TIE specific functions
    T *_tied_object (void);
    // return the underlying object
    void _tied_object (T &obj);
    // set the underlying object
    void _tied_object (T *obj, CORBA::Boolean release=1);
    // set the underlying object and the ownership flag
    CORBA::Boolean _is_owner (void);
    // do we own it
    void _is_owner (CORBA::Boolean b);
    // set the ownership

    // overridden ServantBase operations
    PortableServer::POA_ptr _default_POA (
        CORBA::Environment &env =
          TAO_default_environment ()
      );
    void activate_server (
        const char * server,
        CORBA::Environment &ACE_TRY_ENV =
          TAO_default_environment ()
      )
      ACE_THROW_SPEC ((
        CORBA::SystemException,
        ImplementationRepository::Administration::NotFound,
        ImplementationRepository::Administration::CannotActivate
      ));

    void register_server (
        const char * server,
        const ImplementationRepository::StartupOptions & options,
        CORBA::Environment &ACE_TRY_ENV =
          TAO_default_environment ()
      )
      ACE_THROW_SPEC ((
        CORBA::SystemException,
        ImplementationRepository::Administration::AlreadyRegistered
      ));

    void reregister_server (
        const char * server,
        const ImplementationRepository::StartupOptions & options,
        CORBA::Environment &ACE_TRY_ENV =
          TAO_default_environment ()
      )
      ACE_THROW_SPEC ((
        CORBA::SystemException
      ));

    void remove_server (
        const char * server,
        CORBA::Environment &ACE_TRY_ENV =
          TAO_default_environment ()
      )
      ACE_THROW_SPEC ((
        CORBA::SystemException,
        ImplementationRepository::Administration::NotFound
      ));

    void shutdown_server (
        const char * server,
        CORBA::Environment &ACE_TRY_ENV =
          TAO_default_environment ()
      )
      ACE_THROW_SPEC ((
        CORBA::SystemException,
        ImplementationRepository::Administration::NotFound
      ));

    char * server_is_running (
        const char * server,
        const char * addr,
        ImplementationRepository::ServerObject_ptr server_object,
        CORBA::Environment &ACE_TRY_ENV =
          TAO_default_environment ()
      )
      ACE_THROW_SPEC ((
        CORBA::SystemException,
        ImplementationRepository::Administration::NotFound
      ));

    void server_is_shutting_down (
        const char * server,
        CORBA::Environment &ACE_TRY_ENV =
          TAO_default_environment ()
      )
      ACE_THROW_SPEC ((
        CORBA::SystemException,
        ImplementationRepository::Administration::NotFound
      ));

    void find (
        const char * server,
        ImplementationRepository::ServerInformation_out info,
        CORBA::Environment &ACE_TRY_ENV =
          TAO_default_environment ()
      )
      ACE_THROW_SPEC ((
        CORBA::SystemException,
        ImplementationRepository::Administration::NotFound
      ));

    void list (
        CORBA::ULong how_many,
        ImplementationRepository::ServerInformationList_out server_list,
        ImplementationRepository::ServerInformationIterator_out server_iterator,
        CORBA::Environment &ACE_TRY_ENV =
          TAO_default_environment ()
      )
      ACE_THROW_SPEC ((
        CORBA::SystemException
      ));

private:
    T *ptr_;
    PortableServer::POA_var poa_;
    CORBA::Boolean rel_;

    // copy and assignment are not allowed
    Administration_tie (const Administration_tie &);
    void operator= (const Administration_tie &);
  };

#endif /* ACE_HAS_USING_KEYWORD */

  class ServerInformationIterator;
  typedef ServerInformationIterator *ServerInformationIterator_ptr;
  class TAO_Export ServerInformationIterator :  public virtual PortableServer::ServantBase
  {
  protected:
    ServerInformationIterator (void);

  public:
    ServerInformationIterator (const ServerInformationIterator& rhs);
    virtual ~ServerInformationIterator (void);


    virtual CORBA::Boolean _is_a (
        const char* logical_type_id,
        CORBA::Environment &ACE_TRY_ENV =
          TAO_default_environment ()
      );

    virtual void* _downcast (
        const char* logical_type_id
      );

    static void _is_a_skel (
        CORBA::ServerRequest &req,
        void *obj,
        void *context,
        CORBA::Environment &ACE_TRY_ENV =
          TAO_default_environment ()
      );

    static void _non_existent_skel (
        CORBA::ServerRequest &req,
        void *obj,
        void *context,
        CORBA::Environment &ACE_TRY_ENV =
          TAO_default_environment ()
      );

    virtual void _dispatch (
        CORBA::ServerRequest &_tao_req,
        void *_tao_context,
        CORBA::Environment &ACE_TRY_ENV =
          TAO_default_environment ()
      );

    ::ImplementationRepository::ServerInformationIterator *_this (
        CORBA::Environment &ACE_TRY_ENV =
          TAO_default_environment ()
      );

    virtual const char* _interface_repository_id (void) const;

    virtual CORBA::Boolean next_n (
        CORBA::ULong how_many,
        ImplementationRepository::ServerInformationList_out server_list,
        CORBA::Environment &ACE_TRY_ENV =
          TAO_default_environment ()
      )
      ACE_THROW_SPEC ((
        CORBA::SystemException
      )) = 0;

    static void next_n_skel (
        CORBA::ServerRequest &_tao_req,
        void *_tao_obj,
        void *_tao_context,
        CORBA::Environment &ACE_TRY_ENV =
          TAO_default_environment ()
      );

    virtual void destroy (
        CORBA::Environment &ACE_TRY_ENV =
          TAO_default_environment ()
      )
      ACE_THROW_SPEC ((
        CORBA::SystemException
      )) = 0;

    static void destroy_skel (
        CORBA::ServerRequest &_tao_req,
        void *_tao_obj,
        void *_tao_context,
        CORBA::Environment &ACE_TRY_ENV =
          TAO_default_environment ()
      );


  };


#if !defined (_IMPLEMENTATIONREPOSITORY_SERVERINFORMATIONITERATOR___THRU_POA_COLLOCATED_SH_)
#define _IMPLEMENTATIONREPOSITORY_SERVERINFORMATIONITERATOR___THRU_POA_COLLOCATED_SH_

  class TAO_Export _tao_thru_poa_collocated_ServerInformationIterator     : public virtual ::ImplementationRepository::ServerInformationIterator
  {
  public:
    _tao_thru_poa_collocated_ServerInformationIterator (
        TAO_Stub *stub
      );
    virtual CORBA::Boolean _is_a(
        const CORBA::Char *logical_type_id,
        CORBA_Environment &ACE_TRY_ENV = TAO_default_environment ()
      );

    virtual CORBA::Boolean _non_existent(
        CORBA_Environment &ACE_TRY_ENV = TAO_default_environment ()
      );

        virtual CORBA::Boolean next_n (
        CORBA::ULong how_many,
        ImplementationRepository::ServerInformationList_out server_list,
        CORBA::Environment &ACE_TRY_ENV =
          TAO_default_environment ()
      )
      ACE_THROW_SPEC ((
        CORBA::SystemException
      ));

    virtual void destroy (
        CORBA::Environment &ACE_TRY_ENV =
          TAO_default_environment ()
      )
      ACE_THROW_SPEC ((
        CORBA::SystemException
      ));

  };


#endif /* end #if !defined */


#if defined (ACE_HAS_USING_KEYWORD)
  // TIE class: Refer to CORBA v2.2, Section 20.34.4
  template <class T>
  class TAO_Export ServerInformationIterator_tie : public ServerInformationIterator
  {
  public:
    ServerInformationIterator_tie (T &t);
    // the T& ctor
    ServerInformationIterator_tie (T &t, PortableServer::POA_ptr poa);
    // ctor taking a POA
    ServerInformationIterator_tie (T *tp, CORBA::Boolean release=1);
    // ctor taking pointer and an ownership flag
    ServerInformationIterator_tie (T *tp, PortableServer::POA_ptr poa, CORBA::Boolean release=1);
    // ctor with T*, ownership flag and a POA
    ~ServerInformationIterator_tie (void);
    // dtor

    // TIE specific functions
    T *_tied_object (void);
    // return the underlying object
    void _tied_object (T &obj);
    // set the underlying object
    void _tied_object (T *obj, CORBA::Boolean release=1);
    // set the underlying object and the ownership flag
    CORBA::Boolean _is_owner (void);
    // do we own it
    void _is_owner (CORBA::Boolean b);
    // set the ownership

    // overridden ServantBase operations
    PortableServer::POA_ptr _default_POA (
        CORBA::Environment &env =
          TAO_default_environment ()
      );
    CORBA::Boolean next_n (
        CORBA::ULong how_many,
        ImplementationRepository::ServerInformationList_out server_list,
        CORBA::Environment &ACE_TRY_ENV =
          TAO_default_environment ()
      )
      ACE_THROW_SPEC ((
        CORBA::SystemException
      ));

    void destroy (
        CORBA::Environment &ACE_TRY_ENV =
          TAO_default_environment ()
      )
      ACE_THROW_SPEC ((
        CORBA::SystemException
      ));

private:
    T *ptr_;
    PortableServer::POA_var poa_;
    CORBA::Boolean rel_;

    // copy and assignment are not allowed
    ServerInformationIterator_tie (const ServerInformationIterator_tie &);
    void operator= (const ServerInformationIterator_tie &);
  };

#endif /* ACE_HAS_USING_KEYWORD */

}
TAO_NAMESPACE_CLOSE

#include "ImplRepoS_T.h"

#if defined (__ACE_INLINE__)
#include "ImplRepoS.i"
#endif /* defined INLINE */

#if defined(_MSC_VER) && (_MSC_VER >= 1200)
#pragma warning(pop)
#endif /* _MSC_VER */

#include "ace/post.h"
#endif /* ifndef */
