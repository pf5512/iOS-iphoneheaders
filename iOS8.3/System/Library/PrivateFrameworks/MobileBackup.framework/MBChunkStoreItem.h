/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 2:34:41 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/MobileBackup.framework/backupd
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class MBFileID, MBDomain, NSString, NSData, NSError;

@interface MBChunkStoreItem : NSObject {

	MBFileID* _fileID;
	MBDomain* _domain;
	NSString* _path;
	NSString* _temporaryPath;
	NSData* _encryptedKey;
	int _fd;
	NSData* _signature;
	NSString* _authToken;
	NSString* _receipt;
	NSError* _error;
	unsigned long long _itemID;
	unsigned long long _size;
	double _progress;

}

@property (assign,nonatomic) unsigned long long itemID;              //@synthesize itemID=_itemID - In the implementation block
@property (nonatomic,retain) MBFileID * fileID;                      //@synthesize fileID=_fileID - In the implementation block
@property (nonatomic,retain) MBDomain * domain;                      //@synthesize domain=_domain - In the implementation block
@property (nonatomic,retain) NSString * path;                        //@synthesize path=_path - In the implementation block
@property (nonatomic,retain) NSString * temporaryPath;               //@synthesize temporaryPath=_temporaryPath - In the implementation block
@property (nonatomic,retain) NSData * encryptedKey;                  //@synthesize encryptedKey=_encryptedKey - In the implementation block
@property (assign,nonatomic) int fd;                                 //@synthesize fd=_fd - In the implementation block
@property (nonatomic,retain) NSData * signature;                     //@synthesize signature=_signature - In the implementation block
@property (assign,nonatomic) unsigned long long size;                //@synthesize size=_size - In the implementation block
@property (nonatomic,retain) NSString * authToken;                   //@synthesize authToken=_authToken - In the implementation block
@property (assign,nonatomic) double progress;                        //@synthesize progress=_progress - In the implementation block
@property (nonatomic,retain) NSString * receipt;                     //@synthesize receipt=_receipt - In the implementation block
@property (nonatomic,retain) NSError * error;                        //@synthesize error=_error - In the implementation block
+(id)chunkStoreItemWithFileID:(id)arg1 domain:(id)arg2 path:(id)arg3 ;
-(void)setEncryptedKey:(NSData *)arg1 ;
-(void)setTemporaryPath:(NSString *)arg1 ;
-(NSString *)receipt;
-(id)initWithFileID:(id)arg1 domain:(id)arg2 path:(id)arg3 ;
-(NSString *)temporaryPath;
-(NSData *)encryptedKey;
-(void)setReceipt:(NSString *)arg1 ;
-(int)fd;
-(void)setFd:(int)arg1 ;
-(void)dealloc;
-(unsigned long long)size;
-(MBDomain *)domain;
-(NSString *)path;
-(void)setSize:(unsigned long long)arg1 ;
-(void)setProgress:(double)arg1 ;
-(void)setPath:(NSString *)arg1 ;
-(void)close;
-(double)progress;
-(NSError *)error;
-(unsigned long long)itemID;
-(MBFileID *)fileID;
-(void)setSignature:(NSData *)arg1 ;
-(NSData *)signature;
-(void)setFileID:(MBFileID *)arg1 ;
-(void)setAuthToken:(NSString *)arg1 ;
-(NSString *)authToken;
-(void)setItemID:(unsigned long long)arg1 ;
-(void)setDomain:(MBDomain *)arg1 ;
-(void)setError:(NSError *)arg1 ;
@end

