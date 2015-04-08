/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@class NSArray;

@interface TSDCAKeyframeAnimationContextCache : TSDCAPropertyAnimationContextCache {
    BOOL _isObjectTypeCGColor;
    NSArray *_keyTimes;
    NSArray *_timingFunctions;
    NSArray *_values;
}

@property(readonly) BOOL isObjectTypeCGColor;
@property(readonly) NSArray * keyTimes;
@property(readonly) NSArray * timingFunctions;
@property(readonly) NSArray * values;

- (id)initWithAnimation:(id)arg1;
- (BOOL)isObjectTypeCGColor;
- (id)keyTimes;
- (id)timingFunctions;
- (id)values;
- (void)verifyCacheWithAnimation:(id)arg1;

@end