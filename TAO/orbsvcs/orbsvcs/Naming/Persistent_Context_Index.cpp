// $Id$

#include "Persistent_Context_Index.h"

TAO_Index::~TAO_Index (void)
{
}


#if defined (ACE_HAS_EXPLICIT_TEMPLATE_INSTANTIATION)
template class ACE_Shared_Hash_Map<TAO_Persistent_Index_ExtId, TAO_Persistent_Index_IntId>;
template class ACE_Hash_Map_Manager<TAO_Persistent_Index_ExtId, TAO_Persistent_Index_IntId, ACE_Null_Mutex>;
template class ACE_Hash_Map_Manager_Ex<TAO_Persistent_Index_ExtId, TAO_Persistent_Index_IntId, ACE_Hash<TAO_Persistent_Index_ExtId>, ACE_Equal_To<TAO_Persistent_Index_ExtId>, ACE_Null_Mutex>;
template class ACE_Hash_Map_Entry<TAO_Persistent_Index_ExtId, TAO_Persistent_Index_IntId>;
template class ACE_Hash<TAO_Persistent_Index_ExtId>;
template class ACE_Equal_To<TAO_Persistent_Index_ExtId>;
template class ACE_Hash_Map_Iterator_Base_Ex<TAO_Persistent_Index_ExtId, TAO_Persistent_Index_IntId, ACE_Hash<TAO_Persistent_Index_ExtId>, ACE_Equal_To<TAO_Persistent_Index_ExtId>, ACE_Null_Mutex>;
template class ACE_Hash_Map_Iterator<TAO_Persistent_Index_ExtId, TAO_Persistent_Index_IntId, ACE_Null_Mutex>;
template class ACE_Hash_Map_Iterator_Ex<TAO_Persistent_Index_ExtId, TAO_Persistent_Index_IntId, ACE_Hash<TAO_Persistent_Index_ExtId>, ACE_Equal_To<TAO_Persistent_Index_ExtId>, ACE_Null_Mutex>;
template class ACE_Hash_Map_Reverse_Iterator<TAO_Persistent_Index_ExtId, TAO_Persistent_Index_IntId, ACE_Null_Mutex>;
template class ACE_Hash_Map_Reverse_Iterator_Ex<TAO_Persistent_Index_ExtId, TAO_Persistent_Index_IntId, ACE_Hash<TAO_Persistent_Index_ExtId>, ACE_Equal_To<TAO_Persistent_Index_ExtId>, ACE_Null_Mutex>;
#elif defined (ACE_HAS_TEMPLATE_INSTANTIATION_PRAGMA)
#pragma instantiate ACE_Shared_Hash_Map<TAO_Persistent_Index_ExtId, TAO_Persistent_Index_IntId>
#pragma instantiate ACE_Hash_Map_Manager<TAO_Persistent_Index_ExtId, TAO_Persistent_Index_IntId, ACE_Null_Mutex>
#pragma instantiate ACE_Hash_Map_Manager_Ex<TAO_Persistent_Index_ExtId, TAO_Persistent_Index_IntId, ACE_Hash<TAO_Persistent_Index_ExtId>, ACE_Equal_To<TAO_Persistent_Index_ExtId>, ACE_Null_Mutex>
#pragma instantiate ACE_Hash_Map_Entry<TAO_Persistent_Index_ExtId, TAO_Persistent_Index_IntId>
#pragma instantiate ACE_Hash<TAO_Persistent_Index_ExtId>
#pragma instantiate ACE_Equal_To<TAO_Persistent_Index_ExtId>
#pragma instantiate ACE_Hash_Map_Iterator_Base_Ex<TAO_Persistent_Index_ExtId, TAO_Persistent_Index_IntId, ACE_Hash<TAO_Persistent_Index_ExtId>, ACE_Equal_To<TAO_Persistent_Index_ExtId>, ACE_Null_Mutex>
#pragma instantiate ACE_Hash_Map_Iterator<TAO_Persistent_Index_ExtId, TAO_Persistent_Index_IntId, ACE_Null_Mutex>
#pragma instantiate ACE_Hash_Map_Iterator_Ex<TAO_Persistent_Index_ExtId, TAO_Persistent_Index_IntId, ACE_Hash<TAO_Persistent_Index_ExtId>, ACE_Equal_To<TAO_Persistent_Index_ExtId>, ACE_Null_Mutex>
#pragma instantiate ACE_Hash_Map_Reverse_Iterator<TAO_Persistent_Index_ExtId, TAO_Persistent_Index_IntId, ACE_Null_Mutex>
#pragma instantiate ACE_Hash_Map_Reverse_Iterator_Ex<TAO_Persistent_Index_ExtId, TAO_Persistent_Index_IntId, ACE_Hash<TAO_Persistent_Index_ExtId>, ACE_Equal_To<TAO_Persistent_Index_ExtId>, ACE_Null_Mutex>
#endif /* ACE_HAS_EXPLICIT_TEMPLATE_INSTANTIATION */
