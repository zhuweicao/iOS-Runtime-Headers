/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

@class BWNodeInput, BWNodeOutput, BWPipelineStage, NSString;

@interface BWNodeConnection : NSObject <BWNodeOutputConsumer> {
    BWNodeInput *_input;
    BWNodeOutput *_output;
    BWPipelineStage *_pipelineStage;
}

@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(readonly) unsigned int hash;
@property(readonly) BWNodeInput * input;
@property(readonly) BWNodeOutput * output;
@property(readonly) BWPipelineStage * pipelineStage;
@property(readonly) Class superclass;

+ (id)_requirementsArrayForInputByResolvingPassthroughTree:(id)arg1;
+ (void)initialize;

- (BOOL)attach;
- (void)consumeMessage:(id)arg1 fromOutput:(id)arg2;
- (void)dealloc;
- (BOOL)detach;
- (id)initWithOutput:(id)arg1 input:(id)arg2 pipelineStage:(id)arg3;
- (id)input;
- (id)output;
- (id)pipelineStage;
- (BOOL)resolveCommonBufferFormat;

@end
