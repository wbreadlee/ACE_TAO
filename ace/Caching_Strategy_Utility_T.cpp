//$Id$

#ifndef CACHING_STRATEGY_UTILITY_T_C
#define CACHING_STRATEGY_UTILITY_T_C

#include "ace/Caching_Strategy_Utility_T.h"

#if !defined (ACE_LACKS_PRAGMA_ONCE)
#define ACE_LACKS_PRAGMA_ONCE
#endif /* ACE_LACKS_PRAGMA_ONCE */

#include "ace/Cleanup_Strategies_T.h"

#if !defined (__ACE_INLINE__)
#include "ace/Caching_Strategy_Utility_T.i"
#endif /* __ACE_INLINE__ */

ACE_RCSID(ace, Caching_Strategy_Utility_T, "$Id$")

template <class CONTAINER, class ATTRIBUTES> int 
ACE_Caching_Strategy_Utility<CONTAINER, ATTRIBUTES>::clear_cache (CONTAINER &container, 
                                                                  ACE_Cleanup_Strategy<CONTAINER> *cleanup_s,
                                                                  const unsigned int purge_percent,
                                                                  unsigned int &entries)
{
  // Check that the purge_percent is non-zero.
  if (purge_percent == 0)
    return 0;

  // Also whether the number of entries in the cache is just one!
  // Oops! then thers no way out but exiting. So return an error.
  if (entries == 1)
    return -1;
  
  // Calculate the no of entries to remove from the cache depending
  // upon the <purge_percent>.
  double val = (double) purge_percent / 100;
  int no_of_entries = (int) ceil (val * entries);
 
  KEY *key_to_remove = 0;
  VALUE *value_to_remove = 0;
  
  for (int i = 0; i < no_of_entries ; ++i)
     {
       this->minimum (container, 
                      key_to_remove,
                      value_to_remove);
       
       if (cleanup_s->cleanup (container, key_to_remove, value_to_remove) == -1)
         return -1;
       
       --entries;
              
     }
  
  return 0;
}

template <class CONTAINER, class ATTRIBUTES> void 
ACE_Caching_Strategy_Utility<CONTAINER, ATTRIBUTES>::minimum (CONTAINER &container, 
                                                              KEY *&key,
                                                              VALUE *&value)
{
  typedef ACE_TYPENAME CONTAINER::ITERATOR ITERATOR;
  typedef ACE_TYPENAME CONTAINER::ENTRY ITEM;
 
  ITERATOR iter (container);
  ATTRIBUTES  min = 0;
  ITEM *item = 0;  

  // The iterator moves thru the container searching for the entry with the
  // lowest ATTRIBUTES.  
  for (min = (*iter).int_id_.second (), key = &(*iter).ext_id_, value = &(*iter).int_id_;
       iter.next (item) != 0;
       ++iter)
    {
      // Ah! an item with lower ATTTRIBUTES...
      if (min > (*iter).int_id_.second ())
        {
          min = (*iter).int_id_.second ();
          key = &(*iter).ext_id_;
          value = &(*iter).int_id_;

        }
    }
}

#endif /* CACHING_STRATEGY_UTILITY_T_C */
