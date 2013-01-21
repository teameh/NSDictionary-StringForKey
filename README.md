#NSDictionary (StringForKey)

####Catagory for NSDictionary to make sure your dictionary returns a string

###stringForKey:

Returns the NSString associated with a given key.
If the object associated with a given key is not a NSString the description will be returned.
If the object is nil, nil will be returned.

    - (NSString *) stringForKey:(NSString *)key;    
 
**key** The key for which to return the corresponding value.


###stringForKey:fallback:

Returns the NSString associated with a given key.
If the object associated with a given key is not a NSString the description will be returned.
If the object is nil, the fallback string is returned (could be nil).
 
    - (NSString *) stringForKey:(NSString *)key fallback:(NSString *)fallback;

**key** The key for which to return the corresponding value.

**fallback** The fallback if the object associated with a given key is nil..
