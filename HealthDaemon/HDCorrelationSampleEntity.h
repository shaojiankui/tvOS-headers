//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HealthDaemon/HDSampleEntity.h>

@interface HDCorrelationSampleEntity : HDSampleEntity
{
}

+ (_Bool)addCodableObject:(id)arg1 toCollection:(id)arg2;
+ (id)codableRepresentationEncoderForHealthDaemon:(id)arg1 database:(id)arg2;
+ (id)codableObjectsFromObjectCollection:(id)arg1;
+ (id)_objectsWithIDs:(id)arg1 healthDaemon:(id)arg2;
+ (id)deleteStatementsForRelatedEntitiesInDatabase:(id)arg1;
+ (_Bool)acceptsObject:(id)arg1;
+ (Class)propertyApplierClass;
+ (id)createTableSQL;
+ (_Bool)isBackedByTable;
+ (id)insertDataObject:(id)arg1 withProvenance:(id)arg2 inDatabase:(id)arg3 persistentID:(id)arg4 error:(id *)arg5;
+ (Class)_associatedDataObjectClass;
- (_Bool)deleteFromDatabase:(id)arg1 error:(id *)arg2;

@end
