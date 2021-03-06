/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 12:32:26 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/AccessibilityUtilities.framework/AccessibilityUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <AccessibilityUtilities/AccessibilityUtilities-Structs.h>
@class NSArray, NSMutableArray, NSLinguisticTagger, NSMutableOrderedSet, NSString;

@interface AXLanguageTaggedContent : NSObject {

	NSArray* _currentDialects;
	NSRange _currentChunk;
	char _predictedByTagger;
	char _tagged;
	char _splitContentOnNewlines;
	NSMutableArray* _tags;
	NSLinguisticTagger* _linguisticTagger;
	NSMutableOrderedSet* _unpredictedAmbiguousLangMaps;
	NSString* _userPreferredLangID;

}

@property (nonatomic,readonly) NSString * content; 
@property (assign,getter=isTagged,nonatomic) char tagged;                                     //@synthesize tagged=_tagged - In the implementation block
@property (nonatomic,retain) NSMutableArray * tags;                                           //@synthesize tags=_tags - In the implementation block
@property (nonatomic,retain) NSMutableOrderedSet * unpredictedAmbiguousLangMaps;              //@synthesize unpredictedAmbiguousLangMaps=_unpredictedAmbiguousLangMaps - In the implementation block
@property (assign,nonatomic) char splitContentOnNewlines;                                     //@synthesize splitContentOnNewlines=_splitContentOnNewlines - In the implementation block
@property (nonatomic,copy) NSString * userPreferredLangID;                                    //@synthesize userPreferredLangID=_userPreferredLangID - In the implementation block
@property (nonatomic,retain) NSLinguisticTagger * linguisticTagger;                           //@synthesize linguisticTagger=_linguisticTagger - In the implementation block
@property (nonatomic,retain) NSArray * currentDialects;                                       //@synthesize currentDialects=_currentDialects - In the implementation block
-(void)dealloc;
-(id)description;
-(NSMutableArray *)tags;
-(NSString *)content;
-(void)tagContent;
-(id)primaryUnambiguousDialect;
-(id)primaryAmbiguousDialect;
-(void)setUserPreferredLangID:(NSString *)arg1 ;
-(NSString *)userPreferredLangID;
-(id)ambiguousLangMaps;
-(id)unambiguousLangMaps;
-(void)setLinguisticTagger:(NSLinguisticTagger *)arg1 ;
-(void)setUnpredictedAmbiguousLangMaps:(NSMutableOrderedSet *)arg1 ;
-(NSLinguisticTagger *)linguisticTagger;
-(void)setTagged:(char)arg1 ;
-(void)setCurrentDialects:(NSArray *)arg1 ;
-(void)_manuallyProcessContentWithRange:(NSRange)arg1 ;
-(void)_addTag;
-(id)significantAmbiguousLangMapsForUserKeyboards;
-(char)splitContentOnNewlines;
-(NSArray *)currentDialects;
-(void)enumerateUnpredictedTags:(/*^block*/id)arg1 ;
-(void)enumeratePredictedTags:(/*^block*/id)arg1 ;
-(char)langMapIsSignificant:(id)arg1 ;
-(id)significantAmbiguousLangMaps;
-(char)hasOnlyWesternLangMaps;
-(char)hasOnlyNonWesternLangMaps;
-(void)updateTagsForLocalePrefChange;
-(NSMutableOrderedSet *)unpredictedAmbiguousLangMaps;
-(void)setSplitContentOnNewlines:(char)arg1 ;
-(void)setTags:(NSMutableArray *)arg1 ;
-(id)initWithContent:(id)arg1 ;
-(char)isTagged;
@end

