/* Generated by RuntimeBrowser on iPhone OS 4.0
   Image: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */

@class <PLSlideshowPluginDelegate>, MLAlbum, NSArray;



@interface PLSlideshowPlugin : NSObject 
{
    <PLSlideshowPluginDelegate> *_delegate;
    MLAlbum *_album;
    NSArray *_filteredAlbumImages;
    double _secondsPerSlide;
    BOOL _shuffleAlbum;
    BOOL _shouldRepeat;
}

@property(retain) MLAlbum *album;
@property(readonly) NSArray *displayedPhotos;
@property(readonly) MLPhoto *currentPhoto;
@property BOOL shouldRepeat;
@property BOOL shuffleAlbum;
@property double secondsPerSlide;
@property <PLSlideshowPluginDelegate> *delegate;


- (id)album;
- (BOOL)shuffleAlbum;
- (id)newSlideshowView;
- (void)slideshowViewWillAppear;
- (void)pauseSlideshow;
- (void)resumeSlideshow;
- (void)stopSlideshow;
- (id)currentPhoto;
- (id)displayedPhotos;
- (void)slideshowViewDidAppear;
- (void)setShouldRepeat:(BOOL)arg1;
- (void)setShuffleAlbum:(BOOL)arg1;
- (void)setSecondsPerSlide:(double)arg1;
- (double)secondsPerSlide;
- (void)slideshowViewDidDisappear;
- (BOOL)shouldRepeat;
- (void)setAlbum:(id)arg1;
- (void)dealloc;
- (void)setDelegate:(id)arg1;
- (id)delegate;

@end