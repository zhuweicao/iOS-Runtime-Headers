/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreHAP.framework/CoreHAP
 */

@class NSArray, NSMutableArray, NSNumber, NSString;

@interface HAPMetadata : NSObject {
    NSString *_hapBaseUUIDSuffix;
    NSArray *_hapCharacteristics;
    NSArray *_hapProperties;
    NSArray *_hapServices;
    NSArray *_hapSupportsAuthDataTuples;
    NSArray *_hapValueUnits;
    NSMutableArray *_parsedUUIDs;
    NSNumber *_schemaVersion;
    NSNumber *_version;
}

@property(retain) NSString * hapBaseUUIDSuffix;
@property(retain) NSArray * hapCharacteristics;
@property(retain) NSArray * hapProperties;
@property(retain) NSArray * hapServices;
@property(retain) NSArray * hapSupportsAuthDataTuples;
@property(retain) NSArray * hapValueUnits;
@property(retain) NSMutableArray * parsedUUIDs;
@property(retain) NSNumber * schemaVersion;
@property(retain) NSNumber * version;

+ (id)expandHAPType:(id)arg1 baseUUIDSuffix:(id)arg2;
+ (id)getBuiltinInstance;
+ (id)getSharedInstance;
+ (BOOL)setSharedInstance:(id)arg1 version:(id)arg2 schemaVersion:(id)arg3;
+ (id)shortenHAPType:(id)arg1 baseUUIDSuffix:(id)arg2;

- (void).cxx_destruct;
- (BOOL)allowAssociatedService:(id)arg1;
- (id)btleToServiceType:(id)arg1;
- (id)characteristicDescription:(id)arg1;
- (id)characteristicName:(id)arg1;
- (id)characteristicType:(id)arg1;
- (id)generateDictionary;
- (id)generateHAPMetadataTuplesDictionary:(id)arg1;
- (id)getDefaultCharacteristicMetadata:(id)arg1;
- (id)getDefaultCharacteristicProperties:(id)arg1;
- (id)hapBaseUUIDSuffix;
- (id)hapCharacteristics;
- (id)hapProperties;
- (id)hapServices;
- (id)hapSupportsAuthDataTuples;
- (id)hapValueUnits;
- (id)initWithDictionary:(id)arg1 error:(id*)arg2;
- (id)initWithServices:(id)arg1 characteristics:(id)arg2 units:(id)arg3 properties:(id)arg4 addAuthDataTuples:(id)arg5 hapBaseUUIDSuffix:(id)arg6;
- (BOOL)isMandatoryCharacteristic:(id)arg1 forService:(id)arg2;
- (BOOL)isStandardHAPCharacteristic:(id)arg1;
- (BOOL)isStandardHAPCharacteristicName:(id)arg1;
- (BOOL)isStandardHAPService:(id)arg1;
- (BOOL)isStandardHAPServiceName:(id)arg1;
- (BOOL)isStandardHAPUnitName:(id)arg1;
- (id)mandatoryCharacteristics:(id)arg1;
- (id)parseCharacteristicServiceTuples:(id)arg1;
- (id)parseCharacteristicValue:(id)arg1;
- (id)parseCharacteristics:(id)arg1;
- (BOOL)parseMetadata:(id)arg1;
- (id)parseProperties:(id)arg1;
- (id)parseServiceCharacteristics:(id)arg1;
- (id)parseServices:(id)arg1;
- (id)parseUnits:(id)arg1;
- (BOOL)parseVersion:(id)arg1;
- (id)parsedUUIDs;
- (id)schemaVersion;
- (id)serviceDescription:(id)arg1;
- (id)serviceName:(id)arg1;
- (id)serviceType:(id)arg1;
- (id)serviceTypeToBTLE:(id)arg1;
- (void)setHapBaseUUIDSuffix:(id)arg1;
- (void)setHapCharacteristics:(id)arg1;
- (void)setHapProperties:(id)arg1;
- (void)setHapServices:(id)arg1;
- (void)setHapSupportsAuthDataTuples:(id)arg1;
- (void)setHapValueUnits:(id)arg1;
- (void)setParsedUUIDs:(id)arg1;
- (void)setSchemaVersion:(id)arg1;
- (void)setVersion:(id)arg1;
- (BOOL)supportsAdditionalAuthorizationData:(id)arg1 forService:(id)arg2;
- (BOOL)validateMandatoryCharacteristics:(id)arg1 forService:(id)arg2;
- (id)version;

@end
