/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

@class NSError, NSMutableData, NSString;

@interface CoreDAVOctetStreamParser : NSObject <CoreDAVResponseBodyParser> {
    NSMutableData *_octetStreamData;
    NSError *_parserError;
}

@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(readonly) unsigned int hash;
@property(retain) NSMutableData * octetStreamData;
@property(readonly) NSError * parserError;
@property(readonly) Class superclass;

+ (BOOL)canHandleContentType:(id)arg1;

- (void)dealloc;
- (id)description;
- (id)init;
- (id)octetStreamData;
- (id)parserError;
- (BOOL)processData:(id)arg1 forTask:(id)arg2;
- (void)setOctetStreamData:(id)arg1;

@end
