/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 8:59:10 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /Applications/MobileSafari.app/MobileSafari
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class LSDocumentProxy, NSString;

@interface QuickLookDocument : NSObject {

	LSDocumentProxy* _documentProxy;
	BOOL _needsQuickLookDocumentView;
	NSString* _savedPath;
	NSString* _savedPathWithProperExtension;
	BOOL _shouldDeleteSavedPath;
	BOOL _shouldDeleteSavedPathWithProperExtension;
	NSString* _fileName;
	NSString* _mimeType;
	NSString* _uti;

}

@property (nonatomic,retain) LSDocumentProxy * documentProxy;                    //@synthesize documentProxy=_documentProxy - In the implementation block
@property (nonatomic,readonly) BOOL needsQuickLookDocumentView;                  //@synthesize needsQuickLookDocumentView=_needsQuickLookDocumentView - In the implementation block
@property (nonatomic,copy) NSString * savedPath;                                 //@synthesize savedPath=_savedPath - In the implementation block
@property (nonatomic,copy) NSString * savedPathWithProperExtension;              //@synthesize savedPathWithProperExtension=_savedPathWithProperExtension - In the implementation block
@property (nonatomic,copy) NSString * fileName;                                  //@synthesize fileName=_fileName - In the implementation block
@property (nonatomic,copy) NSString * mimeType;                                  //@synthesize mimeType=_mimeType - In the implementation block
@property (nonatomic,copy) NSString * uti;                                       //@synthesize uti=_uti - In the implementation block
-(void)addQuickLookPrintSettingsToPrintInfo:(id)arg1 ;
-(BOOL)needsQuickLookDocumentView;
-(id)savedPath;
-(void)setSavedPath:(id)arg1 shouldDelete:(BOOL)arg2 ;
-(id)savedPathWithProperExtension;
-(id)documentProxy;
-(void)_deleteSavedPathIfNecessary;
-(void)_deleteSavedPathWithProperExtensionIfNecessary;
-(void)setDocumentProxy:(id)arg1 ;
-(void)setSavedPath:(id)arg1 ;
-(void)setSavedPathWithProperExtension:(id)arg1 ;
-(void)setSavedPathWithProperExtension:(id)arg1 shouldDelete:(BOOL)arg2 ;
-(id)initWithFileName:(id)arg1 mimeType:(id)arg2 uti:(id)arg3 needsQuickLookDocumentView:(BOOL)arg4 ;
-(void)setUti:(id)arg1 ;
-(id)uti;
-(void)dealloc;
-(id)mimeType;
-(void)setMimeType:(id)arg1 ;
-(id)fileName;
-(void)setFileName:(id)arg1 ;
@end

