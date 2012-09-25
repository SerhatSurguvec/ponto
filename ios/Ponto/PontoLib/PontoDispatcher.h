//
//  PontoDispatcher
//  Ponto
//
//  Created by Grzegorz Nowicki <grzegorz@wikia-inc.com> on 21.09.2012.
//  Copyright (c) 2012 Wikia Sp. z o.o. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "PontoBaseHandler.h"

@protocol PontoDispatcherDelegate <NSObject>
@required
- (id)deserializeJSONString:(NSString *)JSON;
- (NSString *)serializeObjectToJSON:(id)someObject;

@end


@interface PontoDispatcher : NSObject <UIWebViewDelegate>

@property (nonatomic, strong) NSString *handlerClassesPrefix;
@property (nonatomic, weak) UIWebView *webView;
@property (nonatomic, weak) id <PontoDispatcherDelegate>delegate;

- (id)initWithHandlerClassesPrefix:(NSString *)classesPrefix;
- (id)initWithHandlerClassesPrefix:(NSString *)classesPrefix andWebView:(UIWebView *)webView;

@end