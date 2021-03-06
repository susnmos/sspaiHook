//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"
#import "UMTBase.h"

@class NSString;

@interface UMTImprintValue : NSObject <UMTBase, NSCoding>
{
    NSString *__value;
    long long __ts;
    NSString *__guid;
    _Bool __value_isset;
    _Bool __ts_isset;
    _Bool __guid_isset;
}

- (void)dealloc;
@property(readonly, copy) NSString *description;
- (void)encodeWithCoder:(id)arg1;
@property(retain, nonatomic, getter=guid, setter=setGuid:) NSString *guid;
- (_Bool)guidIsSet;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithValue:(id)arg1 ts:(long long)arg2 guid:(id)arg3;
- (void)read:(id)arg1;
@property(nonatomic, getter=ts, setter=setTs:) long long ts;
@property(retain, nonatomic, getter=value, setter=setValue:) NSString *value;
- (_Bool)tsIsSet;
- (void)unsetGuid;
- (void)unsetTs;
- (void)unsetValue;
- (void)validate;
- (_Bool)valueIsSet;
- (void)write:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

