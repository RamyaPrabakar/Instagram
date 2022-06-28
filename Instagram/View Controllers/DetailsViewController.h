//
//  DetailsViewController.h
//  Instagram
//
//  Created by Ramya Prabakar on 6/28/22.
//

#import <UIKit/UIKit.h>
#import "Post.h"
#import "PFImageView.h"
#import <Parse/Parse.h>

NS_ASSUME_NONNULL_BEGIN

@interface DetailsViewController : UIViewController
@property (weak, nonatomic) IBOutlet PFImageView *bigPostImage;
@property (nonatomic, strong) Post *passedPost;
@property (weak, nonatomic) IBOutlet UILabel *captionDetailsView;
@property (weak, nonatomic) IBOutlet UILabel *timestamp;
@end

NS_ASSUME_NONNULL_END
