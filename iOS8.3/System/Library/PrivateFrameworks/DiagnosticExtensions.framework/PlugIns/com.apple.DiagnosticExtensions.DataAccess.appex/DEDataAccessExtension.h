/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 1:32:04 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/DiagnosticExtensions.framework/PlugIns/com.apple.DiagnosticExtensions.DataAccess.appex/com.apple.DiagnosticExtensions.DataAccess
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <com.apple.DiagnosticExtensions.DataAccess/com.apple.DiagnosticExtensions.DataAccess-Structs.h>
#import <DiagnosticExtensions/DEExtensionProvider.h>

@interface DEDataAccessExtension : DEExtensionProvider {

	CFStringRef _key;

}

@property (assign,nonatomic) CFStringRef key;              //@synthesize key=_key - In the implementation block
-(id)init;
-(CFStringRef)key;
-(void)setKey:(CFStringRef)arg1 ;
-(char)canEnableLogging;
-(void)enableLogging;
-(void)disableLogging;
-(id)attachmentsWithParams:(id)arg1 ;
-(char)isLoggingEnabled;
@end

