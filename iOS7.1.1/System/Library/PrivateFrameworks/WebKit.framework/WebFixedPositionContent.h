/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:25:59 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/WebKit.framework/WebKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <WebKit/WebKit-Structs.h>
@interface WebFixedPositionContent : NSObject {

	WebFixedPositionContentData* _private;

}
-(void)dealloc;
-(bool)hasFixedOrStickyPositionLayers;
-(void)scrollOrZoomChanged:(CGRect)arg1 ;
-(id)initWithWebView:(id)arg1 ;
-(void)didFinishScrollingOrZooming;
-(void)overflowScrollPositionForLayer:(id)arg1 changedTo:(CGPoint)arg2 ;
-(void)setViewportConstrainedLayers:(HashMap<CALayer *, WTF::OwnPtr<WebCore::ViewportConstraints>, WTF::PtrHash<CALayer *>, WTF::HashTraits<CALayer *>, WTF::HashTraits<WTF::OwnPtr<WebCore::ViewportConstraints> > >*)arg1 stickyContainerMap:(HashMap<CALayer *, CALayer *, WTF::PtrHash<CALayer *>, WTF::HashTraits<CALayer *>, WTF::HashTraits<CALayer *> >*)arg2 ;
-(double)minimumOffsetFromFixedPositionLayersToAnchorEdge:(long long)arg1 ofRect:(CGRect)arg2 inLayer:(id)arg3 ;
@end

