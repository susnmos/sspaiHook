//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UICollectionViewCell.h"

@class NSLayoutConstraint, UIActivityIndicatorView, UIImageView;

@interface BTNInventoryPreviewImageCell : UICollectionViewCell
{
    UIActivityIndicatorView *_activityView;
    UIImageView *_imageView;
    NSLayoutConstraint *_imageViewTopConstraint;
    NSLayoutConstraint *_imageViewLeadingConstraint;
    NSLayoutConstraint *_imageViewBottomConstraint;
    NSLayoutConstraint *_imageViewTrailingConstraint;
}

+ (id)identifier;
- (void).cxx_destruct;
@property(retain, nonatomic) UIActivityIndicatorView *activityView; // @synthesize activityView=_activityView;
- (void)configureWithImage:(id)arg1;
- (id)constraintForView:(id)arg1 withLayoutAttribute:(long long)arg2;
@property(retain, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
@property(retain, nonatomic) NSLayoutConstraint *imageViewBottomConstraint; // @synthesize imageViewBottomConstraint=_imageViewBottomConstraint;
@property(retain, nonatomic) NSLayoutConstraint *imageViewLeadingConstraint; // @synthesize imageViewLeadingConstraint=_imageViewLeadingConstraint;
@property(retain, nonatomic) NSLayoutConstraint *imageViewTopConstraint; // @synthesize imageViewTopConstraint=_imageViewTopConstraint;
@property(retain, nonatomic) NSLayoutConstraint *imageViewTrailingConstraint; // @synthesize imageViewTrailingConstraint=_imageViewTrailingConstraint;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)initializeView;

@end
