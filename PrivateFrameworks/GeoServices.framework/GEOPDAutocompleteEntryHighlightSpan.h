/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@class PBUnknownFields;

@interface GEOPDAutocompleteEntryHighlightSpan : PBCodable <NSCopying> {
    struct { 
        unsigned int length : 1; 
        unsigned int startIndex : 1; 
    } _has;
    unsigned int _length;
    unsigned int _startIndex;
    PBUnknownFields *_unknownFields;
}

@property BOOL hasLength;
@property BOOL hasStartIndex;
@property unsigned int length;
@property unsigned int startIndex;
@property(readonly) PBUnknownFields * unknownFields;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)hasLength;
- (BOOL)hasStartIndex;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (unsigned int)length;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)setHasLength:(BOOL)arg1;
- (void)setHasStartIndex:(BOOL)arg1;
- (void)setLength:(unsigned int)arg1;
- (void)setStartIndex:(unsigned int)arg1;
- (unsigned int)startIndex;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

@end
