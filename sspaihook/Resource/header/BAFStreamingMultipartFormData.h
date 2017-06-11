//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "BAFMultipartFormData.h"

@class BAFMultipartBodyStream, NSMutableURLRequest, NSString;

@interface BAFStreamingMultipartFormData : NSObject <BAFMultipartFormData>
{
    NSMutableURLRequest *_request;
    unsigned long long _stringEncoding;
    NSString *_boundary;
    BAFMultipartBodyStream *_bodyStream;
}

- (void).cxx_destruct;
- (void)appendPartWithFileData:(id)arg1 name:(id)arg2 fileName:(id)arg3 mimeType:(id)arg4;
- (_Bool)appendPartWithFileURL:(id)arg1 name:(id)arg2 error:(id *)arg3;
- (_Bool)appendPartWithFileURL:(id)arg1 name:(id)arg2 fileName:(id)arg3 mimeType:(id)arg4 error:(id *)arg5;
- (void)appendPartWithFormData:(id)arg1 name:(id)arg2;
- (void)appendPartWithHeaders:(id)arg1 body:(id)arg2;
- (void)appendPartWithInputStream:(id)arg1 name:(id)arg2 fileName:(id)arg3 length:(long long)arg4 mimeType:(id)arg5;
@property(retain, nonatomic) BAFMultipartBodyStream *bodyStream; // @synthesize bodyStream=_bodyStream;
@property(copy, nonatomic) NSString *boundary; // @synthesize boundary=_boundary;
- (id)initWithURLRequest:(id)arg1 stringEncoding:(unsigned long long)arg2;
@property(copy, nonatomic) NSMutableURLRequest *request; // @synthesize request=_request;
- (id)requestByFinalizingMultipartFormData;
@property(nonatomic) unsigned long long stringEncoding; // @synthesize stringEncoding=_stringEncoding;
- (void)throttleBandwidthWithPacketSize:(unsigned long long)arg1 delay:(double)arg2;

@end
