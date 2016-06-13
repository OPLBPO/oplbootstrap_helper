<div class="<?php print $classes ?>" <?php if (!empty($css_id)) { print "id=\"$css_id\""; } ?>>
  <?php if ($content['top']): ?>
    <div class="row">
      <div class="col-md-12"><?php print $content['top']; ?></div>
    </div>
  <?php endif ?>

  <?php if ($content['branch-hours'] || $content['right']): ?>
    <div class="branch-hours-tabs row">
      <div class="col-md-5"><?php print $content['branch-hours']; ?></div>
      <div class="col-md-7">
        <ul class="nav nav-tabs" id="branch-details">
          <li class="active"><a data-target="#tab-exterior" data-toggle="tab"><?php print t('Exterior');?></a></li>
          <li><a data-target="#tab-virtual-tour" data-toggle="tab"><?php print t('Virtual Tour');?></a></li>
          <li><a data-target="#tab-map" data-toggle="tab"><?php print t('Map');?></a></li>
          <li><a data-target="#tab-nearest-branches" data-toggle="tab"><?php print t('Nearest branches');?></a></li>
        </ul>
        <div class="tab-content">  
          <?php print $content['branch-tabs']; ?>
        </div>
      </div>
    </div>
  <?php endif ?>

  <?php if ($content['branch-features']): ?>
    <div class="branch-features row">
      <div class="col-md-12"><?php print $content['branch-features']; ?></div>
    </div>
  <?php endif ?>

  <?php if ($content['branch-blog-posts']): ?>
    <div class="branch-blog-posts row">
      <div class="col-md-12"><?php print $content['branch-blog-posts']; ?></div>
    </div>
  <?php endif ?>

  <?php if ($content['branch-quick-tabs']): ?>
    <div class="branch-quick-tabs row">
      <div class="col-md-12">
        <ul class="nav nav-tabs" id="branch-quick-tabs">
          <li class="active"><a data-target="#tab-programs" data-toggle="tab"><?php print t('Programs');?></a></li>
          <li><a data-target="#tab-meeting-rooms" data-toggle="tab"><?php print t('Meeting Rooms');?></a></li>
          <li><a data-target="#tab-appointments" data-toggle="tab"><?php print t('Appointments');?></a></li>
        </ul>
        <div class="tab-content"> 
          <?php print $content['branch-quick-tabs']; ?></div>
        </div>
      </div>
    </div>
  <?php endif ?>

  <?php if ($content['bottom']): ?>
    <div class="row">
      <div class="col-md-12"><?php print $content['bottom']; ?></div>
    </div>
  <?php endif ?>
</div>