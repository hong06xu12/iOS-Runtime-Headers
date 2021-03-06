/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UserNotifications.framework/UserNotifications
 */

@interface UNNotificationRequest : NSObject <NSCopying, NSSecureCoding> {
    UNNotificationContent * _content;
    NSString * _identifier;
    UNNotificationTrigger * _trigger;
}

@property (nonatomic, readonly, copy) UNNotificationContent *content;
@property (nonatomic, readonly, copy) NSString *identifier;
@property (nonatomic, readonly, copy) UNNotificationTrigger *trigger;

+ (id)requestWithIdentifier:(id)arg1 content:(id)arg2 trigger:(id)arg3;
+ (id)requestWithIdentifier:(id)arg1 pushPayload:(id)arg2 bundleIdentifier:(id)arg3;
+ (id)requestWithPushPayload:(id)arg1 bundleIdentifier:(id)arg2;
+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_initWithIdentifier:(id)arg1 content:(id)arg2 trigger:(id)arg3;
- (id)content;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned int)hash;
- (id)identifier;
- (id)initWithCoder:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (id)trigger;

@end
