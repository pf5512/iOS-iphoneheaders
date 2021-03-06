/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:27:04 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iWorkImport/TSPSaveOperationState.h>

@class NSURL, NSProgress, TSPDocumentProperties, TSPDocumentRevision, TSPObject, SFUCryptoKey, NSData, NSString, TSPPackageWriter, NSUUID;

@interface TSPDocumentSaveOperationState : TSPSaveOperationState {

	char _didEndWriteOperation;
	char _shouldLeavePendingEndSave;
	NSURL* _URL;
	int _packageType;
	NSURL* _relativeURLForExternalData;
	NSProgress* _progress;
	TSPDocumentProperties* _documentProperties;
	TSPDocumentRevision* _documentRevision;
	TSPObject* _documentObject;
	TSPObject* _supportObject;
	NSURL* _originalSupportURL;
	SFUCryptoKey* _encryptionKey;
	NSData* _passwordVerifier;
	NSString* _documentPasswordHint;
	TSPPackageWriter* _documentPackageWriter;
	TSPPackageWriter* _supportPackageWriter;
	NSUUID* _documentUUID;
	unsigned long long _saveToken;

}

@property (nonatomic,readonly) NSURL * URL;                                           //@synthesize URL=_URL - In the implementation block
@property (nonatomic,readonly) int packageType;                                       //@synthesize packageType=_packageType - In the implementation block
@property (nonatomic,copy) NSURL * relativeURLForExternalData;                        //@synthesize relativeURLForExternalData=_relativeURLForExternalData - In the implementation block
@property (nonatomic,retain) NSProgress * progress;                                   //@synthesize progress=_progress - In the implementation block
@property (nonatomic,retain) TSPDocumentProperties * documentProperties;              //@synthesize documentProperties=_documentProperties - In the implementation block
@property (nonatomic,retain) TSPDocumentRevision * documentRevision;                  //@synthesize documentRevision=_documentRevision - In the implementation block
@property (assign,nonatomic) unsigned long long saveToken;                            //@synthesize saveToken=_saveToken - In the implementation block
@property (nonatomic,retain) TSPObject * documentObject;                              //@synthesize documentObject=_documentObject - In the implementation block
@property (nonatomic,retain) TSPObject * supportObject;                               //@synthesize supportObject=_supportObject - In the implementation block
@property (nonatomic,copy) NSURL * originalSupportURL;                                //@synthesize originalSupportURL=_originalSupportURL - In the implementation block
@property (nonatomic,retain) SFUCryptoKey * encryptionKey;                            //@synthesize encryptionKey=_encryptionKey - In the implementation block
@property (nonatomic,retain) NSData * passwordVerifier;                               //@synthesize passwordVerifier=_passwordVerifier - In the implementation block
@property (nonatomic,copy) NSString * documentPasswordHint;                           //@synthesize documentPasswordHint=_documentPasswordHint - In the implementation block
@property (nonatomic,retain) TSPPackageWriter * documentPackageWriter;                //@synthesize documentPackageWriter=_documentPackageWriter - In the implementation block
@property (nonatomic,retain) TSPPackageWriter * supportPackageWriter;                 //@synthesize supportPackageWriter=_supportPackageWriter - In the implementation block
@property (nonatomic,copy) NSUUID * documentUUID;                                     //@synthesize documentUUID=_documentUUID - In the implementation block
@property (assign,nonatomic) char didEndWriteOperation;                               //@synthesize didEndWriteOperation=_didEndWriteOperation - In the implementation block
@property (assign,nonatomic) char shouldLeavePendingEndSave;                          //@synthesize shouldLeavePendingEndSave=_shouldLeavePendingEndSave - In the implementation block
-(void)setEncryptionKey:(SFUCryptoKey *)arg1 ;
-(SFUCryptoKey *)encryptionKey;
-(void)setDocumentObject:(TSPObject *)arg1 ;
-(TSPDocumentProperties *)documentProperties;
-(NSData *)passwordVerifier;
-(id)initWithURL:(id)arg1 updateType:(int)arg2 packageType:(int)arg3 ;
-(void)setDocumentUUID:(NSUUID *)arg1 ;
-(void)setRelativeURLForExternalData:(NSURL *)arg1 ;
-(NSUUID *)documentUUID;
-(void)setDocumentRevision:(TSPDocumentRevision *)arg1 ;
-(void)setSaveToken:(unsigned long long)arg1 ;
-(void)setDocumentProperties:(TSPDocumentProperties *)arg1 ;
-(unsigned long long)saveToken;
-(void)setOriginalSupportURL:(NSURL *)arg1 ;
-(void)setSupportObject:(TSPObject *)arg1 ;
-(TSPObject *)supportObject;
-(NSURL *)originalSupportURL;
-(int)packageType;
-(NSURL *)relativeURLForExternalData;
-(void)setDocumentPackageWriter:(TSPPackageWriter *)arg1 ;
-(void)setPasswordVerifier:(NSData *)arg1 ;
-(NSString *)documentPasswordHint;
-(void)setDocumentPasswordHint:(NSString *)arg1 ;
-(void)setSupportPackageWriter:(TSPPackageWriter *)arg1 ;
-(TSPPackageWriter *)documentPackageWriter;
-(char)didEndWriteOperation;
-(void)setDidEndWriteOperation:(char)arg1 ;
-(void)setShouldLeavePendingEndSave:(char)arg1 ;
-(TSPPackageWriter *)supportPackageWriter;
-(TSPDocumentRevision *)documentRevision;
-(char)shouldLeavePendingEndSave;
-(TSPObject *)documentObject;
-(id)init;
-(void)setProgress:(NSProgress *)arg1 ;
-(NSURL *)URL;
-(NSProgress *)progress;
@end

