/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:18:48 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/Frameworks/QuickLook.framework/QuickLook
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <QuickLook/QLPreviewItem.h>

@class NSURL, NSString, QLServicePreviewContentController, QLPreviewItemProxy;

@interface QLPreviewRemoteItem : NSObject <QLPreviewItem> {

	QLServicePreviewContentController* _contentController;
	int _index;
	QLPreviewItemProxy* _proxy;
	char _resolving;
	/*^block*/id _completionBlock;

}

@property (readonly) QLPreviewItemProxy * proxy; 
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (readonly) NSURL * previewItemURL; 
@property (readonly) NSString * previewItemTitle; 
-(char)isPromisedItem;
-(void)_clearCompletionBlock;
-(double)autoPlaybackPosition;
-(id)initWithContentController:(id)arg1 index:(int)arg2 ;
-(void)resolveWithCompletionBlock:(/*^block*/id)arg1 ;
-(void)dealloc;
-(NSString *)description;
-(void)invalidate;
-(NSURL *)previewItemURL;
-(id)previewItemContentType;
-(id)previewItemURLForDisplay;
-(NSString *)previewItemTitle;
-(QLPreviewItemProxy *)proxy;
-(id)backgroundColorOverride;
@end

