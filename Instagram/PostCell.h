//
//  PostCell.h
//  Instagram
//
//  Created by Ramya Prabakar on 6/28/22.
//

#import <UIKit/UIKit.h>
#import <Parse/Parse.h>
#import "Post.h"
#import "PFImageView.h"

NS_ASSUME_NONNULL_BEGIN

@interface PostCell : UITableViewCell
@property (weak, nonatomic) IBOutlet UILabel *postCaption;
@property (weak, nonatomic) IBOutlet PFImageView *postImage;
@property (weak, nonatomic) IBOutlet UILabel *timestamp;
@property (weak, nonatomic) IBOutlet UILabel *usernameLabel;

@end

NS_ASSUME_NONNULL_END
