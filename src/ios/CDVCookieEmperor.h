#import <Cordova/CDVPlugin.h>
#import <WebKit/WebKit.h>

@interface CDVCookieEmperor : CDVPlugin

- (void)getCookieValue:(CDVInvokedUrlCommand*)command;
- (void)setCookieValue:(CDVInvokedUrlCommand*)command;
- (void)clearCookies:(CDVInvokedUrlCommand*)command;

@end
