/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 7:10:24 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /Applications/iBooks.app/iBooks
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iBooks/AEPlugin.h>

@class AEAnnotationProvider, NSMutableArray, NSString;

@interface AEAggregationPlugin : NSObject <AEPlugin> {

	NSMutableArray* _plugins;
	NSString* _extension;
	NSString* _scheme;
	AEAnnotationProvider* _sharedAnnotationProvider;

}

@property (nonatomic,readonly) NSString * extension;                                       //@synthesize extension=_extension - In the implementation block
@property (nonatomic,readonly) NSString * scheme;                                          //@synthesize scheme=_scheme - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) AEAnnotationProvider * sharedAnnotationProvider;              //@synthesize sharedAnnotationProvider=_sharedAnnotationProvider - In the implementation block
-(id)associatedAssetType;
-(id)helperForURL:(id)arg1 withOptions:(id)arg2 ;
-(char)deleteAssetAtURL:(id)arg1 ;
-(AEAnnotationProvider *)sharedAnnotationProvider;
-(id)proofingHelperForMetadata:(id)arg1 ;
-(void)setSharedAnnotationProvider:(AEAnnotationProvider *)arg1 ;
-(id)supportedFileExtensions;
-(id)supportedUrlSchemes;
-(id)initWithFileExtension:(id)arg1 ;
-(id)initWithUrlScheme:(id)arg1 ;
-(void)dealloc;
-(NSString *)scheme;
-(NSString *)extension;
-(void)addPlugin:(id)arg1 ;
@end

