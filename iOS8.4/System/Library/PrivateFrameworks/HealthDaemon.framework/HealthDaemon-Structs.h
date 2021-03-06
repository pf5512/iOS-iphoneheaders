/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:22:49 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

typedef struct {
	double avg;
	double max;
	double min;
	unsigned long long count;
} SCD_Struct_HD0;

typedef struct _compressed_pair<unsigned long, std::__1::__map_value_compare<long long, std::__1::__value_type<long long, _HDDiscreteStats>, std::__1::less<long long>, true> > {
	unsigned long long __first_;
} compressed_pair<unsigned long, std::__1::__map_value_compare<long long, std::__1::__value_type<long long, _HDDiscreteStats>, std::__1::less<long long>, true> >;

typedef struct _tree_end_node<std::__1::__tree_node_base<void *> *> {
	__tree_node_base<void *> __left_;
} tree_end_node<std::__1::__tree_node_base<void *> *>;

typedef struct _compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<long long, _HDDiscreteStats>, void *> > > {
	tree_end_node<std::__1::__tree_node_base<void *> *> __first_;
} compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<long long, _HDDiscreteStats>, void *> > >;

typedef struct _tree<std::__1::__value_type<long long, _HDDiscreteStats>, std::__1::__map_value_compare<long long, std::__1::__value_type<long long, _HDDiscreteStats>, std::__1::less<long long>, true>, std::__1::allocator<std::__1::__value_type<long long, _HDDiscreteStats> > > {
	__tree_node<std::__1::__value_type<long long, _HDDiscreteStats>, void *> __begin_node_;
	compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<long long, _HDDiscreteStats>, void *> > > __pair1_;
	compressed_pair<unsigned long, std::__1::__map_value_compare<long long, std::__1::__value_type<long long, _HDDiscreteStats>, std::__1::less<long long>, true> > __pair3_;
} tree<std::__1::__value_type<long long, _HDDiscreteStats>, std::__1::__map_value_compare<long long, std::__1::__value_type<long long, _HDDiscreteStats>, std::__1::less<long long>, true>, std::__1::allocator<std::__1::__value_type<long long, _HDDiscreteStats> > >;

typedef struct map<long long, _HDDiscreteStats, std::__1::less<long long>, std::__1::allocator<std::__1::pair<const long long, _HDDiscreteStats> > > {
	tree<std::__1::__value_type<long long, _HDDiscreteStats>, std::__1::__map_value_compare<long long, std::__1::__value_type<long long, _HDDiscreteStats>, std::__1::less<long long>, true>, std::__1::allocator<std::__1::__value_type<long long, _HDDiscreteStats> > > __tree_;
} map<long long, _HDDiscreteStats, std::__1::less<long long>, std::__1::allocator<std::__1::pair<const long long, _HDDiscreteStats> > >;

typedef struct _NSZone* NSZoneRef;

typedef struct {
	unsigned achievementType : 1;
	unsigned completedDate : 1;
	unsigned doubleValue : 1;
	unsigned intValue : 1;
} SCD_Struct_HD7;

typedef struct {
	unsigned dataType : 1;
	unsigned endDate : 1;
	unsigned startDate : 1;
} SCD_Struct_HD8;

typedef struct sqlite3_stmt* sqlite3_stmtRef;

typedef struct _compressed_pair<unsigned long, std::__1::__map_value_compare<long long, std::__1::__value_type<long long, double>, std::__1::less<long long>, true> > {
	unsigned long long __first_;
} compressed_pair<unsigned long, std::__1::__map_value_compare<long long, std::__1::__value_type<long long, double>, std::__1::less<long long>, true> >;

typedef struct _compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<long long, double>, void *> > > {
	tree_end_node<std::__1::__tree_node_base<void *> *> __first_;
} compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<long long, double>, void *> > >;

typedef struct _tree<std::__1::__value_type<long long, double>, std::__1::__map_value_compare<long long, std::__1::__value_type<long long, double>, std::__1::less<long long>, true>, std::__1::allocator<std::__1::__value_type<long long, double> > > {
	__tree_node<std::__1::__value_type<long long, double>, void *> __begin_node_;
	compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<long long, double>, void *> > > __pair1_;
	compressed_pair<unsigned long, std::__1::__map_value_compare<long long, std::__1::__value_type<long long, double>, std::__1::less<long long>, true> > __pair3_;
} tree<std::__1::__value_type<long long, double>, std::__1::__map_value_compare<long long, std::__1::__value_type<long long, double>, std::__1::less<long long>, true>, std::__1::allocator<std::__1::__value_type<long long, double> > >;

typedef struct map<long long, double, std::__1::less<long long>, std::__1::allocator<std::__1::pair<const long long, double> > > {
	tree<std::__1::__value_type<long long, double>, std::__1::__map_value_compare<long long, std::__1::__value_type<long long, double>, std::__1::less<long long>, true>, std::__1::allocator<std::__1::__value_type<long long, double> > > __tree_;
} map<long long, double, std::__1::less<long long>, std::__1::allocator<std::__1::pair<const long long, double> > >;

typedef struct {
	double field1;
	double field2;
	long long field3;
	long long field4;
	double field5;
} SCD_Struct_HD14;

typedef struct {
	unsigned objectType : 1;
} SCD_Struct_HD15;

typedef struct {
	unsigned sequenceNumber : 1;
	unsigned statusCode : 1;
} SCD_Struct_HD16;

typedef struct sqlite3* sqlite3Ref;

typedef struct __CFDictionary* CFDictionaryRef;

typedef struct {
	unsigned duration : 1;
	unsigned goal : 1;
	unsigned goalType : 1;
	unsigned totalDistanceInCanonicalUnit : 1;
	unsigned totalEnergyBurnedInCanonicalUnit : 1;
	unsigned type : 1;
} SCD_Struct_HD19;

typedef struct {
	unsigned activeEnergyBurnedAnchor : 1;
	unsigned activeHours : 1;
	unsigned activeHoursAnchor : 1;
	unsigned briskMinutes : 1;
	unsigned briskMinutesAnchor : 1;
	unsigned cacheIndex : 1;
	unsigned calorieGoalAnchor : 1;
	unsigned energyBurned : 1;
	unsigned energyBurnedGoal : 1;
	unsigned energyBurnedGoalAnchor : 1;
	unsigned energyBurnedGoalDate : 1;
	unsigned stepCount : 1;
	unsigned stepCountAnchor : 1;
	unsigned walkingAndRunningDistance : 1;
	unsigned walkingAndRunningDistanceAnchor : 1;
	unsigned workoutAnchor : 1;
} SCD_Struct_HD20;

