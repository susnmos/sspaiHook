//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "JPUSHJSONProtocol.h"
#import "NSCoding.h"
#import "NSCopying.h"

@class NSString;

@interface JPUSHNetElement : NSObject <NSCopying, NSCoding, JPUSHJSONProtocol>
{
    unsigned char _version;
    unsigned char _protocolType;
    unsigned long long _rid;
    unsigned long long _uid;
}

- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, copy) NSString *description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)jpush_fromJSONValue:(id)arg1;
- (id)jpush_jsonClassType;
- (id)jpush_toJSON;
@property(nonatomic) unsigned char protocolType; // @synthesize protocolType=_protocolType;
@property(nonatomic) unsigned long long rid; // @synthesize rid=_rid;
@property(nonatomic) unsigned long long uid; // @synthesize uid=_uid;
@property(nonatomic) unsigned char version; // @synthesize version=_version;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
