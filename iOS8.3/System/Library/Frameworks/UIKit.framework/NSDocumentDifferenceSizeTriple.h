/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, June 24, 2015 at 11:18:00 PM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSDocumentDifferenceSize;

@interface NSDocumentDifferenceSizeTriple : NSObject {

	NSDocumentDifferenceSize* _dueToRecentChangesBeforeSaving;
	NSDocumentDifferenceSize* _betweenPreservingPreviousVersionAndSaving;
	NSDocumentDifferenceSize* _betweenPreviousSavingAndSaving;

}

@property (nonatomic,readonly) NSDocumentDifferenceSize * dueToRecentChangesBeforeSaving;                         //@synthesize dueToRecentChangesBeforeSaving=_dueToRecentChangesBeforeSaving - In the implementation block
@property (nonatomic,readonly) NSDocumentDifferenceSize * betweenPreservingPreviousVersionAndSaving;              //@synthesize betweenPreservingPreviousVersionAndSaving=_betweenPreservingPreviousVersionAndSaving - In the implementation block
@property (nonatomic,readonly) NSDocumentDifferenceSize * betweenPreviousSavingAndSaving;                         //@synthesize betweenPreviousSavingAndSaving=_betweenPreviousSavingAndSaving - In the implementation block
-(void)dealloc;
-(id)init;
-(id)description;
-(NSDocumentDifferenceSize *)dueToRecentChangesBeforeSaving;
-(NSDocumentDifferenceSize *)betweenPreservingPreviousVersionAndSaving;
-(NSDocumentDifferenceSize *)betweenPreviousSavingAndSaving;
@end
