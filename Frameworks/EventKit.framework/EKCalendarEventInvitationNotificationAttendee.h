/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/EventKit.framework/EventKit
 */

@class NSString, NSURL;

@interface EKCalendarEventInvitationNotificationAttendee : NSObject <EKIdentityProtocol> {
    NSString *_comment;
    BOOL _commentChanged;
    NSString *_emailAddress;
    NSString *_firstName;
    NSString *_lastName;
    NSString *_name;
    int _participantStatus;
    BOOL _statusChanged;
    NSURL *_url;
}

@property(readonly) NSString * comment;
@property(readonly) BOOL commentChanged;
@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(readonly) NSString * emailAddress;
@property(readonly) NSString * firstName;
@property(readonly) unsigned int hash;
@property(readonly) NSString * lastName;
@property(readonly) NSString * name;
@property(readonly) int participantStatus;
@property(readonly) BOOL statusChanged;
@property(readonly) Class superclass;
@property(readonly) NSURL * url;

- (id)comment;
- (BOOL)commentChanged;
- (void)dealloc;
- (id)emailAddress;
- (id)firstName;
- (id)initWithAttendee:(id)arg1;
- (id)lastName;
- (id)name;
- (int)participantStatus;
- (BOOL)statusChanged;
- (id)url;

@end
