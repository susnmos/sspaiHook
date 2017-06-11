//
//  ViewController.m
//  WebKitTest
//
//  Created by 王文臻 on 2017/6/11.
//  Copyright © 2017年 susnm. All rights reserved.
//

#import "ViewController.h"
#import "SecondViewController.h"

@interface ViewController ()

@end

@implementation ViewController
- (IBAction)buttonClicked:(id)sender {
  SecondViewController *vc = [SecondViewController new];
  UINavigationController *nav = [[UINavigationController alloc] initWithRootViewController:vc];
  [self presentViewController:nav animated:YES completion:nil];
}

- (void)viewDidLoad {
  [super viewDidLoad];
  // Do any additional setup after loading the view, typically from a nib.
}


- (void)didReceiveMemoryWarning {
  [super didReceiveMemoryWarning];
  // Dispose of any resources that can be recreated.
}


@end
