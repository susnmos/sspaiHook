//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSData, NSMutableData;

@interface SSPEvernoteDataStream : NSObject
{
    NSMutableData *_data;
    long long _offset;
}

- (void).cxx_destruct;
- (void)appendDataStream:(id)arg1;
- (void)beginReadField:(id *)arg1 type:(int *)arg2 fieldID:(int *)arg3;
- (void)beginReadList:(int *)arg1 size:(int *)arg2;
- (void)beginReadMap:(int *)arg1 valueType:(int *)arg2 size:(int *)arg3;
- (void)beginReadMessage:(id *)arg1 type:(int *)arg2 sequenceID:(int *)arg3;
- (void)beginReadSet:(int *)arg1 size:(int *)arg2;
- (void)beginReadStruct:(id *)arg1;
- (void)beginWriteField:(id)arg1 type:(int)arg2 fieldID:(int)arg3;
- (void)beginWriteList:(int)arg1 size:(int)arg2;
- (void)beginWriteMap:(int)arg1 valueType:(int)arg2 size:(int)arg3;
- (void)beginWriteMessage:(id)arg1 type:(int)arg2 sequenceID:(int)arg3;
- (void)beginWriteSet:(int)arg1 size:(int)arg2;
- (void)beginWriteStruct:(id)arg1;
@property(retain, nonatomic) NSMutableData *data; // @synthesize data=_data;
@property(readonly, nonatomic) NSData *dataValue;
- (void)endReadField;
- (void)endReadList;
- (void)endReadMap;
- (void)endReadMessage;
- (void)endReadSet;
- (void)endReadStruct;
- (void)endWriteField;
- (void)endWriteList;
- (void)endWriteMap;
- (void)endWriteMessage;
- (void)endWriteSet;
- (void)endWriteStruct;
- (id)init;
- (id)initWithData:(id)arg1;
@property(nonatomic) long long offset; // @synthesize offset=_offset;
- (id)readBinary;
- (_Bool)readBool;
- (unsigned char)readByte;
- (void)readBytes:(char *)arg1 offset:(long long)arg2 len:(long long)arg3;
- (double)readDouble;
- (int)readInt32;
- (long long)readInt64;
- (short)readShort;
- (id)readString;
- (id)readStringBody:(int)arg1;
- (void)writeBinary:(id)arg1;
- (void)writeBool:(_Bool)arg1;
- (void)writeByte:(unsigned char)arg1;
- (void)writeBytes:(const char *)arg1 offset:(long long)arg2 len:(long long)arg3;
- (void)writeDouble:(double)arg1;
- (void)writeFieldStop;
- (void)writeInt32:(int)arg1;
- (void)writeInt64:(long long)arg1;
- (void)writeShort:(short)arg1;
- (void)writeString:(id)arg1;

@end

