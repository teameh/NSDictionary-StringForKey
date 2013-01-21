//
//  NSDictionary+StringForKey.h
//
//  Created by Tieme van Veen on 1/21/12.
//  Copyright (c) 2013 Tieme van Veen. All rights reserved.
//
// Permission is hereby granted, free of charge, to any person obtaining a copy
// of this software and associated documentation files (the "Software"), to deal
// in the Software without restriction, including without limitation the rights
// to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
// copies of the Software, and to permit persons to whom the Software is
// furnished to do so, subject to the following conditions:
//
// The above copyright notice and this permission notice shall be included in
// all copies or substantial portions of the Software.
//
// THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
// IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
// FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
// AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
// LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
// OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
// THE SOFTWARE.
//

#import <Foundation/Foundation.h>

@interface NSDictionary (StringForKey)

/**
 Returns the NSString associated with a given key.
 If the object associated with a given key is not a NSString the description will be returned.
 If the object is nil, nil will be returned.
 
 @param key The key for which to return the corresponding value.
 */

- (NSString *) stringForKey:(NSString *)key;

/**
 Returns the NSString associated with a given key.
 If the object associated with a given key is not a NSString the description will be returned.
 If the object is nil, the fallback string is returned (could be nil).
 
 @param key The key for which to return the corresponding value.
 @param fallback The fallback if the object associated with a given key is nil..
 */

- (NSString *) stringForKey:(NSString *)key fallback:(NSString *)fallback;

@end
