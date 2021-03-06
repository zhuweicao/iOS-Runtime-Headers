/* Generated by RuntimeBrowser
   Image: /usr/lib/libAWDSupportFramework.dylib
 */

@class AWDCoreRoutineTransitionMotionType;

@interface AWDCoreRoutineModelTransitionInstance : PBCodable <NSCopying> {
    unsigned int _distance;
    unsigned int _duration;
    struct { 
        unsigned int distance : 1; 
        unsigned int duration : 1; 
    } _has;
    AWDCoreRoutineTransitionMotionType *_transitionHistogram;
}

@property unsigned int distance;
@property unsigned int duration;
@property BOOL hasDistance;
@property BOOL hasDuration;
@property(readonly) BOOL hasTransitionHistogram;
@property(retain) AWDCoreRoutineTransitionMotionType * transitionHistogram;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned int)distance;
- (unsigned int)duration;
- (BOOL)hasDistance;
- (BOOL)hasDuration;
- (BOOL)hasTransitionHistogram;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)setDistance:(unsigned int)arg1;
- (void)setDuration:(unsigned int)arg1;
- (void)setHasDistance:(BOOL)arg1;
- (void)setHasDuration:(BOOL)arg1;
- (void)setTransitionHistogram:(id)arg1;
- (id)transitionHistogram;
- (void)writeTo:(id)arg1;

@end
