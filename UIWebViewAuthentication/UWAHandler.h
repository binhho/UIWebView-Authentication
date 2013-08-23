//
//  UWAInjector.h
//  UIWebViewAuthentication
//
//  Copyright (c) 2013 Synapsesoft Inc. All rights reserved.
//

#import <Foundation/Foundation.h>

@class UIWebView;
@interface UWAHandler : NSObject
@property (nonatomic) NSURLCredentialPersistence persistence;
- (void)cleanup;
@end
