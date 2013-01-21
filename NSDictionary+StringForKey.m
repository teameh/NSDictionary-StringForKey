//
//  NSDictionary+StringForKey.m
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

#import "NSDictionary+StringForKey.h"

@implementation NSDictionary (StringForKey)

- (NSString *) stringForKey:(NSString *)key
{
    return [self stringForKey:key fallback:nil];
}

- (NSString *) stringForKey:(NSString *)key fallback:(NSString *)fallback
{
    
    id result = [self objectForKey:key];
    
    if(result == nil)
        return fallback; // fallback (could be also be nil!)
    
    // return string or description
    return (![result isKindOfClass:[NSString class]]) ? [result description] : result;
}

@end
