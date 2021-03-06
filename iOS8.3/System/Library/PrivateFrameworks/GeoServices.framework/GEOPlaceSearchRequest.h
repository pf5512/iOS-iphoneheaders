/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 1:52:09 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBRequest.h>
#import <GeoServices/NSCopying.h>

@class GEOAddress, GEOBusinessOptions, GEOClientCapabilities, NSString, GEOLatLng, NSMutableArray, GEOIndexQueryNode, GEOLocation, GEOMapRegion, GEOSuggestionsOptions, NSData;

@interface GEOPlaceSearchRequest : PBRequest <NSCopying> {

	SCD_Struct_GE2 _sessionGUID;
	SCD_Struct_GE54* _additionalPlaceTypes;
	SCD_Struct_GE66* _businessIDs;
	SCD_Struct_GE54* _optionalSuppressionReasons;
	SCD_Struct_GE67 _searchContextSubstring;
	SCD_Struct_GE67* _searchSubstrings;
	unsigned _searchSubstringsCount;
	unsigned _searchSubstringsSpace;
	long long _geoId;
	unsigned long long _intersectingGeoId;
	double _timeSinceMapEnteredForeground;
	double _timeSinceMapViewportChanged;
	double _timestamp;
	GEOAddress* _address;
	GEOBusinessOptions* _businessOptions;
	int _businessSortOrder;
	GEOClientCapabilities* _clientCapabilities;
	NSString* _deviceCountryCode;
	GEOLatLng* _deviceLocation;
	NSString* _deviceTimeZone;
	NSMutableArray* _filterByBusinessCategorys;
	GEOIndexQueryNode* _indexFilter;
	NSString* _inputLanguage;
	int _knownAccuracy;
	GEOLatLng* _knownLocation;
	int _localSearchProviderID;
	GEOLocation* _location;
	GEOMapRegion* _mapRegion;
	int _maxBusinessReviews;
	int _maxResults;
	NSString* _phoneticLocaleIdentifier;
	int _placeTypeLimit;
	GEOAddress* _preserveFields;
	NSString* _search;
	NSString* _searchContext;
	GEOLatLng* _searchLocation;
	int _searchSource;
	int _sequenceNumber;
	NSMutableArray* _serviceTags;
	GEOSuggestionsOptions* _suggestionsOptions;
	NSString* _suggestionsPrefix;
	int _transportTypeForTravelTimes;
	NSData* _zilchPoints;
	char _excludeAddressInResults;
	char _includeBusinessCategories;
	char _includeBusinessRating;
	char _includeEntryPoints;
	char _includeFeatureSets;
	char _includeGeoId;
	char _includeMatchedToken;
	char _includeNameForForwardGeocodingResults;
	char _includePhonetics;
	char _includeQuads;
	char _includeRevgeoRequestTemplate;
	char _includeSpokenNames;
	char _includeStatusCodeInfo;
	char _includeSuggestionsOnly;
	char _includeTravelDistance;
	char _includeTravelTime;
	char _includeUnmatchedStrings;
	char _isFromAPI;
	char _isStrictGeocoding;
	char _isStrictMapRegion;
	char _structuredSearch;
	char _suppressResultsRequiringAttribution;
	SCD_Struct_GE68 _has;

}

@property (nonatomic,readonly) unsigned businessIDsCount; 
@property (nonatomic,readonly) unsigned long long* businessIDs; 
@property (nonatomic,readonly) char hasAddress; 
@property (nonatomic,retain) GEOAddress * address;                                       //@synthesize address=_address - In the implementation block
@property (nonatomic,readonly) char hasLocation; 
@property (nonatomic,retain) GEOLocation * location;                                     //@synthesize location=_location - In the implementation block
@property (nonatomic,readonly) char hasSearch; 
@property (nonatomic,retain) NSString * search;                                          //@synthesize search=_search - In the implementation block
@property (nonatomic,readonly) char hasMapRegion; 
@property (nonatomic,retain) GEOMapRegion * mapRegion;                                   //@synthesize mapRegion=_mapRegion - In the implementation block
@property (nonatomic,readonly) unsigned additionalPlaceTypesCount; 
@property (nonatomic,readonly) int* additionalPlaceTypes; 
@property (assign,nonatomic) char hasIncludePhonetics; 
@property (assign,nonatomic) char includePhonetics;                                      //@synthesize includePhonetics=_includePhonetics - In the implementation block
@property (assign,nonatomic) char hasMaxResults; 
@property (assign,nonatomic) int maxResults;                                             //@synthesize maxResults=_maxResults - In the implementation block
@property (assign,nonatomic) char hasSessionGUID; 
@property (assign,nonatomic) SCD_Struct_GE2 sessionGUID;                                 //@synthesize sessionGUID=_sessionGUID - In the implementation block
@property (assign,nonatomic) char hasBusinessSortOrder; 
@property (assign,nonatomic) int businessSortOrder;                                      //@synthesize businessSortOrder=_businessSortOrder - In the implementation block
@property (assign,nonatomic) char hasIncludeBusinessRating; 
@property (assign,nonatomic) char includeBusinessRating;                                 //@synthesize includeBusinessRating=_includeBusinessRating - In the implementation block
@property (assign,nonatomic) char hasIncludeBusinessCategories; 
@property (assign,nonatomic) char includeBusinessCategories;                             //@synthesize includeBusinessCategories=_includeBusinessCategories - In the implementation block
@property (assign,nonatomic) char hasMaxBusinessReviews; 
@property (assign,nonatomic) int maxBusinessReviews;                                     //@synthesize maxBusinessReviews=_maxBusinessReviews - In the implementation block
@property (nonatomic,retain) NSMutableArray * filterByBusinessCategorys;                 //@synthesize filterByBusinessCategorys=_filterByBusinessCategorys - In the implementation block
@property (assign,nonatomic) char hasIsStrictMapRegion; 
@property (assign,nonatomic) char isStrictMapRegion;                                     //@synthesize isStrictMapRegion=_isStrictMapRegion - In the implementation block
@property (assign,nonatomic) char hasTimestamp; 
@property (assign,nonatomic) double timestamp;                                           //@synthesize timestamp=_timestamp - In the implementation block
@property (nonatomic,readonly) char hasZilchPoints; 
@property (nonatomic,retain) NSData * zilchPoints;                                       //@synthesize zilchPoints=_zilchPoints - In the implementation block
@property (assign,nonatomic) char hasIncludeEntryPoints; 
@property (assign,nonatomic) char includeEntryPoints;                                    //@synthesize includeEntryPoints=_includeEntryPoints - In the implementation block
@property (nonatomic,readonly) char hasBusinessOptions; 
@property (nonatomic,retain) GEOBusinessOptions * businessOptions;                       //@synthesize businessOptions=_businessOptions - In the implementation block
@property (assign,nonatomic) char hasLocalSearchProviderID; 
@property (assign,nonatomic) int localSearchProviderID;                                  //@synthesize localSearchProviderID=_localSearchProviderID - In the implementation block
@property (assign,nonatomic) char hasIncludeSuggestionsOnly; 
@property (assign,nonatomic) char includeSuggestionsOnly;                                //@synthesize includeSuggestionsOnly=_includeSuggestionsOnly - In the implementation block
@property (assign,nonatomic) char hasStructuredSearch; 
@property (assign,nonatomic) char structuredSearch;                                      //@synthesize structuredSearch=_structuredSearch - In the implementation block
@property (nonatomic,readonly) char hasSuggestionsPrefix; 
@property (nonatomic,retain) NSString * suggestionsPrefix;                               //@synthesize suggestionsPrefix=_suggestionsPrefix - In the implementation block
@property (nonatomic,readonly) char hasDeviceCountryCode; 
@property (nonatomic,retain) NSString * deviceCountryCode;                               //@synthesize deviceCountryCode=_deviceCountryCode - In the implementation block
@property (nonatomic,readonly) char hasDeviceLocation; 
@property (nonatomic,retain) GEOLatLng * deviceLocation;                                 //@synthesize deviceLocation=_deviceLocation - In the implementation block
@property (nonatomic,readonly) char hasInputLanguage; 
@property (nonatomic,retain) NSString * inputLanguage;                                   //@synthesize inputLanguage=_inputLanguage - In the implementation block
@property (nonatomic,readonly) char hasPhoneticLocaleIdentifier; 
@property (nonatomic,retain) NSString * phoneticLocaleIdentifier;                        //@synthesize phoneticLocaleIdentifier=_phoneticLocaleIdentifier - In the implementation block
@property (assign,nonatomic) char hasSequenceNumber; 
@property (assign,nonatomic) int sequenceNumber;                                         //@synthesize sequenceNumber=_sequenceNumber - In the implementation block
@property (assign,nonatomic) char hasSuppressResultsRequiringAttribution; 
@property (assign,nonatomic) char suppressResultsRequiringAttribution;                   //@synthesize suppressResultsRequiringAttribution=_suppressResultsRequiringAttribution - In the implementation block
@property (assign,nonatomic) char hasIsFromAPI; 
@property (assign,nonatomic) char isFromAPI;                                             //@synthesize isFromAPI=_isFromAPI - In the implementation block
@property (assign,nonatomic) char hasTimeSinceMapEnteredForeground; 
@property (assign,nonatomic) double timeSinceMapEnteredForeground;                       //@synthesize timeSinceMapEnteredForeground=_timeSinceMapEnteredForeground - In the implementation block
@property (assign,nonatomic) char hasTimeSinceMapViewportChanged; 
@property (assign,nonatomic) double timeSinceMapViewportChanged;                         //@synthesize timeSinceMapViewportChanged=_timeSinceMapViewportChanged - In the implementation block
@property (assign,nonatomic) char hasIncludeSpokenNames; 
@property (assign,nonatomic) char includeSpokenNames;                                    //@synthesize includeSpokenNames=_includeSpokenNames - In the implementation block
@property (nonatomic,readonly) char hasDeviceTimeZone; 
@property (nonatomic,retain) NSString * deviceTimeZone;                                  //@synthesize deviceTimeZone=_deviceTimeZone - In the implementation block
@property (nonatomic,readonly) char hasClientCapabilities; 
@property (nonatomic,retain) GEOClientCapabilities * clientCapabilities;                 //@synthesize clientCapabilities=_clientCapabilities - In the implementation block
@property (assign,nonatomic) char hasIncludeTravelTime; 
@property (assign,nonatomic) char includeTravelTime;                                     //@synthesize includeTravelTime=_includeTravelTime - In the implementation block
@property (assign,nonatomic) char hasTransportTypeForTravelTimes; 
@property (assign,nonatomic) int transportTypeForTravelTimes;                            //@synthesize transportTypeForTravelTimes=_transportTypeForTravelTimes - In the implementation block
@property (nonatomic,readonly) char hasSuggestionsOptions; 
@property (nonatomic,retain) GEOSuggestionsOptions * suggestionsOptions;                 //@synthesize suggestionsOptions=_suggestionsOptions - In the implementation block
@property (assign,nonatomic) char hasPlaceTypeLimit; 
@property (assign,nonatomic) int placeTypeLimit;                                         //@synthesize placeTypeLimit=_placeTypeLimit - In the implementation block
@property (assign,nonatomic) char hasIsStrictGeocoding; 
@property (assign,nonatomic) char isStrictGeocoding;                                     //@synthesize isStrictGeocoding=_isStrictGeocoding - In the implementation block
@property (assign,nonatomic) char hasIncludeTravelDistance; 
@property (assign,nonatomic) char includeTravelDistance;                                 //@synthesize includeTravelDistance=_includeTravelDistance - In the implementation block
@property (assign,nonatomic) char hasGeoId; 
@property (assign,nonatomic) long long geoId;                                            //@synthesize geoId=_geoId - In the implementation block
@property (assign,nonatomic) char hasIncludeQuads; 
@property (assign,nonatomic) char includeQuads;                                          //@synthesize includeQuads=_includeQuads - In the implementation block
@property (assign,nonatomic) char hasExcludeAddressInResults; 
@property (assign,nonatomic) char excludeAddressInResults;                               //@synthesize excludeAddressInResults=_excludeAddressInResults - In the implementation block
@property (nonatomic,readonly) unsigned searchSubstringsCount; 
@property (nonatomic,readonly) SCD_Struct_GE67* searchSubstrings; 
@property (assign,nonatomic) char hasIncludeGeoId; 
@property (assign,nonatomic) char includeGeoId;                                          //@synthesize includeGeoId=_includeGeoId - In the implementation block
@property (nonatomic,readonly) char hasSearchContext; 
@property (nonatomic,retain) NSString * searchContext;                                   //@synthesize searchContext=_searchContext - In the implementation block
@property (assign,nonatomic) char hasSearchContextSubstring; 
@property (assign,nonatomic) SCD_Struct_GE67 searchContextSubstring;                     //@synthesize searchContextSubstring=_searchContextSubstring - In the implementation block
@property (assign,nonatomic) char hasIncludeStatusCodeInfo; 
@property (assign,nonatomic) char includeStatusCodeInfo;                                 //@synthesize includeStatusCodeInfo=_includeStatusCodeInfo - In the implementation block
@property (nonatomic,readonly) char hasPreserveFields; 
@property (nonatomic,retain) GEOAddress * preserveFields;                                //@synthesize preserveFields=_preserveFields - In the implementation block
@property (assign,nonatomic) char hasIncludeUnmatchedStrings; 
@property (assign,nonatomic) char includeUnmatchedStrings;                               //@synthesize includeUnmatchedStrings=_includeUnmatchedStrings - In the implementation block
@property (nonatomic,readonly) char hasIndexFilter; 
@property (nonatomic,retain) GEOIndexQueryNode * indexFilter;                            //@synthesize indexFilter=_indexFilter - In the implementation block
@property (assign,nonatomic) char hasIncludeFeatureSets; 
@property (assign,nonatomic) char includeFeatureSets;                                    //@synthesize includeFeatureSets=_includeFeatureSets - In the implementation block
@property (nonatomic,retain) NSMutableArray * serviceTags;                               //@synthesize serviceTags=_serviceTags - In the implementation block
@property (assign,nonatomic) char hasIntersectingGeoId; 
@property (assign,nonatomic) unsigned long long intersectingGeoId;                       //@synthesize intersectingGeoId=_intersectingGeoId - In the implementation block
@property (nonatomic,readonly) char hasKnownLocation; 
@property (nonatomic,retain) GEOLatLng * knownLocation;                                  //@synthesize knownLocation=_knownLocation - In the implementation block
@property (assign,nonatomic) char hasKnownAccuracy; 
@property (assign,nonatomic) int knownAccuracy;                                          //@synthesize knownAccuracy=_knownAccuracy - In the implementation block
@property (assign,nonatomic) char hasIncludeRevgeoRequestTemplate; 
@property (assign,nonatomic) char includeRevgeoRequestTemplate;                          //@synthesize includeRevgeoRequestTemplate=_includeRevgeoRequestTemplate - In the implementation block
@property (assign,nonatomic) char hasIncludeMatchedToken; 
@property (assign,nonatomic) char includeMatchedToken;                                   //@synthesize includeMatchedToken=_includeMatchedToken - In the implementation block
@property (assign,nonatomic) char hasSearchSource; 
@property (assign,nonatomic) int searchSource;                                           //@synthesize searchSource=_searchSource - In the implementation block
@property (nonatomic,readonly) unsigned optionalSuppressionReasonsCount; 
@property (nonatomic,readonly) int* optionalSuppressionReasons; 
@property (nonatomic,readonly) char hasSearchLocation; 
@property (nonatomic,retain) GEOLatLng * searchLocation;                                 //@synthesize searchLocation=_searchLocation - In the implementation block
@property (assign,nonatomic) char hasIncludeNameForForwardGeocodingResults; 
@property (assign,nonatomic) char includeNameForForwardGeocodingResults;                 //@synthesize includeNameForForwardGeocodingResults=_includeNameForForwardGeocodingResults - In the implementation block
-(GEOAddress *)address;
-(void)dealloc;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(double)timestamp;
-(void)setTimestamp:(double)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(GEOLocation *)location;
-(id)dictionaryRepresentation;
-(id)initWithTraits:(id)arg1 ;
-(unsigned)requestTypeCode;
-(Class)responseClass;
-(char)hasTimestamp;
-(void)setZilchPoints:(NSData *)arg1 ;
-(char)hasZilchPoints;
-(NSData *)zilchPoints;
-(char)hasMapRegion;
-(void)setKnownAccuracy:(int)arg1 ;
-(void)setHasKnownAccuracy:(char)arg1 ;
-(char)hasKnownAccuracy;
-(int)knownAccuracy;
-(void)setAddress:(GEOAddress *)arg1 ;
-(void)setHasTimestamp:(char)arg1 ;
-(char)hasAddress;
-(void)setClientCapabilities:(GEOClientCapabilities *)arg1 ;
-(void)setServiceTags:(NSMutableArray *)arg1 ;
-(void)addServiceTag:(id)arg1 ;
-(unsigned)serviceTagsCount;
-(void)clearServiceTags;
-(id)serviceTagAtIndex:(unsigned)arg1 ;
-(char)hasClientCapabilities;
-(void)setSequenceNumber:(int)arg1 ;
-(void)setHasSequenceNumber:(char)arg1 ;
-(char)hasSequenceNumber;
-(GEOClientCapabilities *)clientCapabilities;
-(int)sequenceNumber;
-(NSMutableArray *)serviceTags;
-(void)setInputLanguage:(NSString *)arg1 ;
-(void)setPhoneticLocaleIdentifier:(NSString *)arg1 ;
-(void)setLocalSearchProviderID:(int)arg1 ;
-(void)setHasLocalSearchProviderID:(char)arg1 ;
-(char)hasLocalSearchProviderID;
-(void)setGeoId:(long long)arg1 ;
-(void)setHasGeoId:(char)arg1 ;
-(char)hasGeoId;
-(int)localSearchProviderID;
-(long long)geoId;
-(char)hasInputLanguage;
-(NSString *)inputLanguage;
-(char)hasPhoneticLocaleIdentifier;
-(NSString *)phoneticLocaleIdentifier;
-(void)setSuppressResultsRequiringAttribution:(char)arg1 ;
-(void)setHasSuppressResultsRequiringAttribution:(char)arg1 ;
-(char)hasSuppressResultsRequiringAttribution;
-(char)suppressResultsRequiringAttribution;
-(void)setSearch:(NSString *)arg1 ;
-(void)setFilterByBusinessCategorys:(NSMutableArray *)arg1 ;
-(void)setBusinessOptions:(GEOBusinessOptions *)arg1 ;
-(void)setSuggestionsPrefix:(NSString *)arg1 ;
-(void)setDeviceCountryCode:(NSString *)arg1 ;
-(void)setDeviceLocation:(GEOLatLng *)arg1 ;
-(void)setDeviceTimeZone:(NSString *)arg1 ;
-(void)setSuggestionsOptions:(GEOSuggestionsOptions *)arg1 ;
-(void)clearSearchSubstrings;
-(void)setSearchContext:(NSString *)arg1 ;
-(void)setPreserveFields:(GEOAddress *)arg1 ;
-(void)setIndexFilter:(GEOIndexQueryNode *)arg1 ;
-(void)setKnownLocation:(GEOLatLng *)arg1 ;
-(void)setSearchLocation:(GEOLatLng *)arg1 ;
-(void)addFilterByBusinessCategory:(id)arg1 ;
-(unsigned)businessIDsCount;
-(void)clearBusinessIDs;
-(unsigned long long)businessIDAtIndex:(unsigned)arg1 ;
-(void)addBusinessID:(unsigned long long)arg1 ;
-(unsigned)additionalPlaceTypesCount;
-(void)clearAdditionalPlaceTypes;
-(int)additionalPlaceTypeAtIndex:(unsigned)arg1 ;
-(void)addAdditionalPlaceType:(int)arg1 ;
-(unsigned)filterByBusinessCategorysCount;
-(void)clearFilterByBusinessCategorys;
-(id)filterByBusinessCategoryAtIndex:(unsigned)arg1 ;
-(unsigned)searchSubstringsCount;
-(SCD_Struct_GE67)searchSubstringAtIndex:(unsigned)arg1 ;
-(void)addSearchSubstring:(SCD_Struct_GE67)arg1 ;
-(unsigned)optionalSuppressionReasonsCount;
-(void)clearOptionalSuppressionReasons;
-(int)optionalSuppressionReasonAtIndex:(unsigned)arg1 ;
-(void)addOptionalSuppressionReason:(int)arg1 ;
-(unsigned long long*)businessIDs;
-(void)setBusinessIDs:(unsigned long long*)arg1 count:(unsigned)arg2 ;
-(char)hasSearch;
-(int*)additionalPlaceTypes;
-(void)setAdditionalPlaceTypes:(int*)arg1 count:(unsigned)arg2 ;
-(void)setIncludePhonetics:(char)arg1 ;
-(void)setHasIncludePhonetics:(char)arg1 ;
-(char)hasIncludePhonetics;
-(int)maxResults;
-(void)setMaxResults:(int)arg1 ;
-(void)setHasMaxResults:(char)arg1 ;
-(char)hasMaxResults;
-(void)setSessionGUID:(SCD_Struct_GE2)arg1 ;
-(void)setHasSessionGUID:(char)arg1 ;
-(char)hasSessionGUID;
-(void)setBusinessSortOrder:(int)arg1 ;
-(void)setHasBusinessSortOrder:(char)arg1 ;
-(char)hasBusinessSortOrder;
-(void)setIncludeBusinessRating:(char)arg1 ;
-(void)setHasIncludeBusinessRating:(char)arg1 ;
-(char)hasIncludeBusinessRating;
-(void)setIncludeBusinessCategories:(char)arg1 ;
-(void)setHasIncludeBusinessCategories:(char)arg1 ;
-(char)hasIncludeBusinessCategories;
-(void)setMaxBusinessReviews:(int)arg1 ;
-(void)setHasMaxBusinessReviews:(char)arg1 ;
-(char)hasMaxBusinessReviews;
-(void)setIsStrictMapRegion:(char)arg1 ;
-(void)setHasIsStrictMapRegion:(char)arg1 ;
-(char)hasIsStrictMapRegion;
-(void)setIncludeEntryPoints:(char)arg1 ;
-(void)setHasIncludeEntryPoints:(char)arg1 ;
-(char)hasIncludeEntryPoints;
-(char)hasBusinessOptions;
-(void)setIncludeSuggestionsOnly:(char)arg1 ;
-(void)setHasIncludeSuggestionsOnly:(char)arg1 ;
-(char)hasIncludeSuggestionsOnly;
-(void)setStructuredSearch:(char)arg1 ;
-(void)setHasStructuredSearch:(char)arg1 ;
-(char)hasStructuredSearch;
-(char)hasSuggestionsPrefix;
-(char)hasDeviceCountryCode;
-(char)hasDeviceLocation;
-(void)setIsFromAPI:(char)arg1 ;
-(void)setHasIsFromAPI:(char)arg1 ;
-(char)hasIsFromAPI;
-(void)setTimeSinceMapEnteredForeground:(double)arg1 ;
-(void)setHasTimeSinceMapEnteredForeground:(char)arg1 ;
-(char)hasTimeSinceMapEnteredForeground;
-(void)setTimeSinceMapViewportChanged:(double)arg1 ;
-(void)setHasTimeSinceMapViewportChanged:(char)arg1 ;
-(char)hasTimeSinceMapViewportChanged;
-(void)setIncludeSpokenNames:(char)arg1 ;
-(void)setHasIncludeSpokenNames:(char)arg1 ;
-(char)hasIncludeSpokenNames;
-(char)hasDeviceTimeZone;
-(void)setIncludeTravelTime:(char)arg1 ;
-(void)setHasIncludeTravelTime:(char)arg1 ;
-(char)hasIncludeTravelTime;
-(void)setTransportTypeForTravelTimes:(int)arg1 ;
-(void)setHasTransportTypeForTravelTimes:(char)arg1 ;
-(char)hasTransportTypeForTravelTimes;
-(char)hasSuggestionsOptions;
-(void)setPlaceTypeLimit:(int)arg1 ;
-(void)setHasPlaceTypeLimit:(char)arg1 ;
-(char)hasPlaceTypeLimit;
-(void)setIsStrictGeocoding:(char)arg1 ;
-(void)setHasIsStrictGeocoding:(char)arg1 ;
-(char)hasIsStrictGeocoding;
-(void)setIncludeTravelDistance:(char)arg1 ;
-(void)setHasIncludeTravelDistance:(char)arg1 ;
-(char)hasIncludeTravelDistance;
-(void)setIncludeQuads:(char)arg1 ;
-(void)setHasIncludeQuads:(char)arg1 ;
-(char)hasIncludeQuads;
-(void)setExcludeAddressInResults:(char)arg1 ;
-(void)setHasExcludeAddressInResults:(char)arg1 ;
-(char)hasExcludeAddressInResults;
-(SCD_Struct_GE67*)searchSubstrings;
-(void)setSearchSubstrings:(SCD_Struct_GE67*)arg1 count:(unsigned)arg2 ;
-(void)setIncludeGeoId:(char)arg1 ;
-(void)setHasIncludeGeoId:(char)arg1 ;
-(char)hasIncludeGeoId;
-(char)hasSearchContext;
-(void)setSearchContextSubstring:(SCD_Struct_GE67)arg1 ;
-(void)setHasSearchContextSubstring:(char)arg1 ;
-(char)hasSearchContextSubstring;
-(void)setIncludeStatusCodeInfo:(char)arg1 ;
-(void)setHasIncludeStatusCodeInfo:(char)arg1 ;
-(char)hasIncludeStatusCodeInfo;
-(char)hasPreserveFields;
-(void)setIncludeUnmatchedStrings:(char)arg1 ;
-(void)setHasIncludeUnmatchedStrings:(char)arg1 ;
-(char)hasIncludeUnmatchedStrings;
-(char)hasIndexFilter;
-(void)setIncludeFeatureSets:(char)arg1 ;
-(void)setHasIncludeFeatureSets:(char)arg1 ;
-(char)hasIncludeFeatureSets;
-(void)setIntersectingGeoId:(unsigned long long)arg1 ;
-(void)setHasIntersectingGeoId:(char)arg1 ;
-(char)hasIntersectingGeoId;
-(char)hasKnownLocation;
-(void)setIncludeRevgeoRequestTemplate:(char)arg1 ;
-(void)setHasIncludeRevgeoRequestTemplate:(char)arg1 ;
-(char)hasIncludeRevgeoRequestTemplate;
-(void)setIncludeMatchedToken:(char)arg1 ;
-(void)setHasIncludeMatchedToken:(char)arg1 ;
-(char)hasIncludeMatchedToken;
-(void)setSearchSource:(int)arg1 ;
-(void)setHasSearchSource:(char)arg1 ;
-(char)hasSearchSource;
-(int*)optionalSuppressionReasons;
-(void)setOptionalSuppressionReasons:(int*)arg1 count:(unsigned)arg2 ;
-(char)hasSearchLocation;
-(void)setIncludeNameForForwardGeocodingResults:(char)arg1 ;
-(void)setHasIncludeNameForForwardGeocodingResults:(char)arg1 ;
-(char)hasIncludeNameForForwardGeocodingResults;
-(char)includePhonetics;
-(SCD_Struct_GE2)sessionGUID;
-(int)businessSortOrder;
-(char)includeBusinessRating;
-(char)includeBusinessCategories;
-(int)maxBusinessReviews;
-(NSMutableArray *)filterByBusinessCategorys;
-(char)isStrictMapRegion;
-(char)includeEntryPoints;
-(GEOBusinessOptions *)businessOptions;
-(char)includeSuggestionsOnly;
-(char)structuredSearch;
-(NSString *)suggestionsPrefix;
-(NSString *)deviceCountryCode;
-(GEOLatLng *)deviceLocation;
-(char)isFromAPI;
-(double)timeSinceMapEnteredForeground;
-(double)timeSinceMapViewportChanged;
-(char)includeSpokenNames;
-(NSString *)deviceTimeZone;
-(char)includeTravelTime;
-(int)transportTypeForTravelTimes;
-(GEOSuggestionsOptions *)suggestionsOptions;
-(int)placeTypeLimit;
-(char)isStrictGeocoding;
-(char)includeTravelDistance;
-(char)includeQuads;
-(char)excludeAddressInResults;
-(char)includeGeoId;
-(NSString *)searchContext;
-(SCD_Struct_GE67)searchContextSubstring;
-(char)includeStatusCodeInfo;
-(GEOAddress *)preserveFields;
-(char)includeUnmatchedStrings;
-(GEOIndexQueryNode *)indexFilter;
-(char)includeFeatureSets;
-(unsigned long long)intersectingGeoId;
-(GEOLatLng *)knownLocation;
-(char)includeRevgeoRequestTemplate;
-(char)includeMatchedToken;
-(int)searchSource;
-(GEOLatLng *)searchLocation;
-(char)includeNameForForwardGeocodingResults;
-(id)initWithTraits:(id)arg1 includeEntryPoints:(char)arg2 ;
-(id)initWithTraits:(id)arg1 maxResults:(int)arg2 ;
-(void)setLocation:(GEOLocation *)arg1 ;
-(GEOMapRegion *)mapRegion;
-(void)setMapRegion:(GEOMapRegion *)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(char)hasLocation;
-(NSString *)search;
@end

