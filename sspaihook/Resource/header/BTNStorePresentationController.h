//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "BTNResourceConsumer.h"

@class BTNResourceProvider, BTNSandboxAppStoreController, NSString, SKStoreProductViewController;

@interface BTNStorePresentationController : UIViewController <BTNResourceConsumer>
{
    BTNResourceProvider *_resources;
    NSString *_storeId;
    SKStoreProductViewController *_storeViewController;
    CDUnknownBlockType _dismissHandler;
    BTNSandboxAppStoreController *_sandboxController;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType dismissHandler; // @synthesize dismissHandler=_dismissHandler;
- (void)dismissViewControllerAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (id)initWithStoreId:(id)arg1 resources:(id)arg2;
- (long long)preferredStatusBarStyle;
- (void)presentViewController:(id)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
@property(readonly, nonatomic) __weak BTNResourceProvider *resources; // @synthesize resources=_resources;
@property(retain, nonatomic) BTNSandboxAppStoreController *sandboxController; // @synthesize sandboxController=_sandboxController;
@property(retain, nonatomic) SKStoreProductViewController *storeViewController; // @synthesize storeViewController=_storeViewController;
@property(readonly, copy, nonatomic) NSString *storeId; // @synthesize storeId=_storeId;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

