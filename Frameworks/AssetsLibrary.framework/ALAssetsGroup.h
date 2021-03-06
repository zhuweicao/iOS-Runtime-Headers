/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AssetsLibrary.framework/AssetsLibrary
 */

@class ALAssetsGroupPrivate;

@interface ALAssetsGroup : NSObject {
    id _internal;
}

@property(getter=isEditable,readonly) BOOL editable;
@property(retain) ALAssetsGroupPrivate * internal;

- (void)_enumerateAssetsAtIndexes:(id)arg1 options:(unsigned int)arg2 usingBlock:(id)arg3;
- (id)_typeAsString;
- (id)_uuid;
- (BOOL)addAsset:(id)arg1;
- (void)dealloc;
- (id)description;
- (void)enumerateAssetsAtIndexes:(id)arg1 options:(unsigned int)arg2 usingBlock:(id)arg3;
- (void)enumerateAssetsUsingBlock:(id)arg1;
- (void)enumerateAssetsWithOptions:(unsigned int)arg1 usingBlock:(id)arg2;
- (id)initWithPhotoAlbum:(struct NSObject { Class x1; }*)arg1 library:(id)arg2 type:(unsigned int)arg3;
- (id)internal;
- (BOOL)isEditable;
- (BOOL)isValid;
- (int)numberOfAssets;
- (struct CGImage { }*)posterImage;
- (void)setAssetsFilter:(id)arg1;
- (void)setInternal:(id)arg1;
- (id)valueForProperty:(id)arg1;

@end
