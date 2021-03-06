/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@class NSData, NSString;

@interface CKDPTokenRegistrationBody : PBCodable <NSCopying> {
    int _apnsEnv;
    NSString *_bundleIdentifier;
    struct { 
        unsigned int apnsEnv : 1; 
    } _has;
    NSData *_token;
}

@property int apnsEnv;
@property(retain) NSString * bundleIdentifier;
@property BOOL hasApnsEnv;
@property(readonly) BOOL hasBundleIdentifier;
@property(readonly) BOOL hasToken;
@property(retain) NSData * token;

- (void).cxx_destruct;
- (int)apnsEnv;
- (id)bundleIdentifier;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)hasApnsEnv;
- (BOOL)hasBundleIdentifier;
- (BOOL)hasToken;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)setApnsEnv:(int)arg1;
- (void)setBundleIdentifier:(id)arg1;
- (void)setHasApnsEnv:(BOOL)arg1;
- (void)setToken:(id)arg1;
- (id)token;
- (void)writeTo:(id)arg1;

@end
