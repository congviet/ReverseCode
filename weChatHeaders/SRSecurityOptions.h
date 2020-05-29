//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSURLRequest;

@interface SRSecurityOptions : NSObject
{
    _Bool _requestRequiresSSL;
    _Bool _TLSSkipHostnameCheck;
    _Bool _validatesCertificateChain;
    NSURLRequest *_request;
    NSArray *_pinnedCertificates;
}

@property(readonly, nonatomic) _Bool validatesCertificateChain; // @synthesize validatesCertificateChain=_validatesCertificateChain;
@property(nonatomic) _Bool TLSSkipHostnameCheck; // @synthesize TLSSkipHostnameCheck=_TLSSkipHostnameCheck;
@property(readonly, nonatomic) NSArray *pinnedCertificates; // @synthesize pinnedCertificates=_pinnedCertificates;
@property(readonly, nonatomic) _Bool requestRequiresSSL; // @synthesize requestRequiresSSL=_requestRequiresSSL;
@property(readonly, nonatomic) NSURLRequest *request; // @synthesize request=_request;
- (void).cxx_destruct;
- (_Bool)securityTrustContainsPinnedCertificates:(struct __SecTrust *)arg1;
- (void)updateSecurityOptionsInStream:(id)arg1;
- (id)initWithRequest:(id)arg1 pinnedCertificates:(id)arg2 chainValidationEnabled:(_Bool)arg3 TLSSkipHostnameCheck:(_Bool)arg4;

@end
