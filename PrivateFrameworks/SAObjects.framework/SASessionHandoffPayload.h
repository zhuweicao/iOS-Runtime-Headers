/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@class NSData, NSString;

@interface SASessionHandoffPayload : AceObject <SAHandoffPayload> {
}

@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(readonly) unsigned int hash;
@property(copy) NSData * sessionHandoffData;
@property(readonly) Class superclass;

+ (id)sessionHandoffPayload;
+ (id)sessionHandoffPayloadWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;
- (id)groupIdentifier;
- (id)sessionHandoffData;
- (void)setSessionHandoffData:(id)arg1;

@end
