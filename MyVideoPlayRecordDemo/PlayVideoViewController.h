//
//  PlayVideoViewController.h
//  MyVideoPlayRecordDemo
//
//  Created by chang on 15/1/9.
//  Copyright (c) 2015年 chang. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <MobileCoreServices/UTCoreTypes.h>
#import <MediaPlayer/MediaPlayer.h>


@interface PlayVideoViewController : UIViewController<UIImagePickerControllerDelegate,UINavigationControllerDelegate>


- (IBAction)playVideo:(id)sender;

// For opening UIImagePickerController
-(BOOL)startMediaBrowserFromViewController:(UIViewController*)controller usingDelegate:(id )delegate;

@end
