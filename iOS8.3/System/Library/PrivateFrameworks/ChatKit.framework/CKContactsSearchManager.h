/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 1:00:51 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <ChatKit/MFContactsSearchConsumer.h>

@protocol CKContactsSearchManagerDelegate;
@class NSArray, MFContactsSearchManager, MFContactsSearchResultsModel, NSNumber, NSString, NSMutableDictionary;

@interface CKContactsSearchManager : NSObject <MFContactsSearchConsumer> {

	char _suppressGroupSuggestions;
	id<CKContactsSearchManagerDelegate> _delegate;
	NSArray* _enteredRecipients;
	MFContactsSearchManager* _searchManager;
	MFContactsSearchResultsModel* _searchResultsModel;
	unsigned _pendingSearchTypes;
	NSNumber* _currentSearchTaskID;
	NSString* _searchText;
	NSArray* _conversationCache;
	NSMutableDictionary* _recentsDateMap;

}

@property (assign,nonatomic) id<CKContactsSearchManagerDelegate> delegate;                   //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) NSArray * enteredRecipients;                                    //@synthesize enteredRecipients=_enteredRecipients - In the implementation block
@property (assign,nonatomic) char suppressGroupSuggestions;                                  //@synthesize suppressGroupSuggestions=_suppressGroupSuggestions - In the implementation block
@property (nonatomic,retain) MFContactsSearchManager * searchManager;                        //@synthesize searchManager=_searchManager - In the implementation block
@property (nonatomic,retain) MFContactsSearchResultsModel * searchResultsModel;              //@synthesize searchResultsModel=_searchResultsModel - In the implementation block
@property (assign,nonatomic) unsigned pendingSearchTypes;                                    //@synthesize pendingSearchTypes=_pendingSearchTypes - In the implementation block
@property (nonatomic,retain) NSNumber * currentSearchTaskID;                                 //@synthesize currentSearchTaskID=_currentSearchTaskID - In the implementation block
@property (nonatomic,retain) NSString * searchText;                                          //@synthesize searchText=_searchText - In the implementation block
@property (nonatomic,copy) NSArray * conversationCache;                                      //@synthesize conversationCache=_conversationCache - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * recentsDateMap;                           //@synthesize recentsDateMap=_recentsDateMap - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setSearchText:(NSString *)arg1 ;
-(void)consumeSearchResults:(id)arg1 type:(unsigned)arg2 taskID:(id)arg3 ;
-(void)finishedSearchingForType:(unsigned)arg1 ;
-(void)finishedTaskWithID:(id)arg1 ;
-(void)beganNetworkActivity;
-(void)endedNetworkActivity;
-(void)dealloc;
-(void)setDelegate:(id<CKContactsSearchManagerDelegate>)arg1 ;
-(id)init;
-(id<CKContactsSearchManagerDelegate>)delegate;
-(NSString *)searchText;
-(MFContactsSearchManager *)searchManager;
-(NSArray *)enteredRecipients;
-(void)setEnteredRecipients:(NSArray *)arg1 ;
-(void)searchWithText:(id)arg1 ;
-(void)setSearchManager:(MFContactsSearchManager *)arg1 ;
-(char)suppressGroupSuggestions;
-(void)setSuppressGroupSuggestions:(char)arg1 ;
-(void)_generateConversationCache;
-(void)chatStateChanged:(id)arg1 ;
-(MFContactsSearchResultsModel *)searchResultsModel;
-(void)setPendingSearchTypes:(unsigned)arg1 ;
-(NSMutableDictionary *)recentsDateMap;
-(void)setCurrentSearchTaskID:(NSNumber *)arg1 ;
-(NSNumber *)currentSearchTaskID;
-(void)setConversationCache:(NSArray *)arg1 ;
-(NSArray *)conversationCache;
-(void)_sortSearchResultsWithCoreRecentsResults:(id)arg1 namedSearchResults:(id)arg2 ;
-(void)setSearchResultsModel:(MFContactsSearchResultsModel *)arg1 ;
-(unsigned)pendingSearchTypes;
-(void)setRecentsDateMap:(NSMutableDictionary *)arg1 ;
-(void)cancelSearch;
@end

