//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "BTNView.h"

@class UILabel;

@interface BTNTextBannerView : BTNView
{
    UILabel *_titleLabel;
    UILabel *_subtitleLabel;
}

+ (id)textBannerView;
- (void).cxx_destruct;
- (void)awakeFromNib;
@property(retain, nonatomic) UILabel *subtitleLabel; // @synthesize subtitleLabel=_subtitleLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;

@end

