/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:27:02 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSData, NSString;

@interface SFUCryptoKey : NSObject {

	unsigned mIterationCount;
	char* mKey;
	unsigned long mKeyLength;
	NSData* mSaltData;
	NSString* _passphrase;

}

@property (nonatomic,readonly) NSString * passphrase;              //@synthesize passphrase=_passphrase - In the implementation block
-(void)dealloc;
-(const char*)keyData;
-(NSString *)passphrase;
-(id)initAes128KeyFromPassphrase:(const char*)arg1 length:(unsigned)arg2 iterationCount:(unsigned)arg3 saltData:(id)arg4 ;
-(unsigned)iterationCount;
-(id)saltData;
-(id)initAes128KeyFromPassphrase:(id)arg1 iterationCount:(unsigned)arg2 ;
-(id)initAes128KeyFromPassphrase:(id)arg1 withIterationCountAndSaltDataFromCryptoKey:(id)arg2 ;
-(id)initAes128KeyFromPassphrase:(const char*)arg1 length:(unsigned)arg2 iterationCount:(unsigned)arg3 ;
-(id)initAes128KeyFromPassphrase:(id)arg1 iterationCount:(unsigned)arg2 saltData:(id)arg3 ;
-(id)initAes128Key:(const char*)arg1 length:(unsigned)arg2 iterationCount:(unsigned)arg3 ;
-(int)keyType;
-(unsigned long)keyLength;
@end

