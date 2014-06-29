/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:25:18 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/Stocks.framework/Stocks
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Stocks/Stocks-Structs.h>
#import <libTelephonyUtilDynamic.dylib/NSURLConnectionDelegate.h>

@class NSURLRequest, NSURLConnection, NSMutableData;

@interface XMLHTTPRequest : NSObject <NSURLConnectionDelegate> {

	NSURLRequest* _request;
	NSURLConnection* _connection;
	NSMutableData* _rawData;
	xmlSAXHandler* _saxHandler;

}
+(id)uniqueQueryIDString;
+(void)setShouldGenerateOfflineData:(bool)arg1 ;
+(bool)shouldGenerateOfflineData;
+(void)appendDebugString:(id)arg1 ;
+(void)saveDebugString;
-(id)_yahooDoppelganger_connectionForRequest:(id)arg1 delegate:(id)arg2 startImmediately:(bool)arg3 ;
-(int)parseData:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(void)cancel;
-(void)loadRequest:(id)arg1 ;
-(bool)isLoading;
-(void)connection:(id)arg1 didFailWithError:(id)arg2 ;
-(void)connection:(id)arg1 didReceiveData:(id)arg2 ;
-(void)connectionDidFinishLoading:(id)arg1 ;
-(void).cxx_destruct;
-(void)failWithError:(id)arg1 ;
-(id)connectionForRequest:(id)arg1 delegate:(id)arg2 startImmediately:(bool)arg3 ;
-(void)willParseData;
-(void)didParseData;
-(id)aggregateDictionaryDomain;
@end
