//
//  DetailViewController.h
//  viewAnimations
//
//  Created by Himanshu Khatri on 1/12/16.
//  Copyright © 2016 bd 001. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController

@property (strong, nonatomic) id detailItem;
@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;
@property NSInteger x;

@property (strong,nonatomic)UIPreviewAction *previewActions;
@end

