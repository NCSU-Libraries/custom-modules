<?php
/**
 * @file
 * capture_and_promote.rules_defaults.inc
 */

/**
 * Implements hook_default_rules_configuration().
 */
function capture_and_promote_default_rules_configuration() {
  $items = array();
  $items['rules_any_state_to_draft'] = entity_import('rules_config', '{ "rules_any_state_to_draft" : {
      "LABEL" : "Any state to Draft",
      "PLUGIN" : "reaction rule",
      "ACTIVE" : false,
      "OWNER" : "rules",
      "TAGS" : [ "moderation" ],
      "REQUIRES" : [ "workbench_moderation", "rules" ],
      "ON" : { "workbench_moderation_after_moderation_transition" : [] },
      "IF" : [
        { "NOT contents_previous_state" : { "node" : [ "node" ], "moderation_state" : "draft" } },
        { "contents_current_state" : { "node" : [ "node" ], "moderation_state" : "draft" } }
      ],
      "DO" : [
        { "mail" : {
            "to" : [ "node:author:mail" ],
            "subject" : "Your Library Story, [node:title], needs attention",
            "message" : "Hi,\\r\\n\\r\\nWe have taken a look at your Library Story and we have made some suggestions.  Can you take a look at our feedback?  Once you\\u0027re happy with the story you can change the status back to \\u0022Needs Review\\u0022 and we\\u0027ll take a look at it again. \\r\\n\\r\\nYour story: [node:title]\\r\\nURL: [node:url]\\r\\nEdit URL: [node:edit-url]\\r\\n\\r\\nLast moderation notes:\\r\\n[node:log]\\r\\n\\r\\nThanks,\\r\\nLibrary Stories Team",
            "from" : "noreply@ncsu.edu",
            "language" : [ "" ]
          }
        }
      ]
    }
  }');
  $items['rules_any_state_to_needs_review'] = entity_import('rules_config', '{ "rules_any_state_to_needs_review" : {
      "LABEL" : "Any state to Needs Review",
      "PLUGIN" : "reaction rule",
      "ACTIVE" : false,
      "OWNER" : "rules",
      "TAGS" : [ "moderation" ],
      "REQUIRES" : [ "workbench_moderation", "rules" ],
      "ON" : { "workbench_moderation_after_moderation_transition" : [] },
      "IF" : [
        { "NOT contents_previous_state" : { "node" : [ "node" ], "moderation_state" : "needs_review" } },
        { "contents_current_state" : { "node" : [ "node" ], "moderation_state" : "needs_review" } }
      ],
      "DO" : [
        { "mail_to_users_of_role" : {
            "roles" : { "value" : { "16" : "16" } },
            "subject" : "Library Story: [node:title], needs review",
            "message" : "Author: [site:current-user:field-firstname] [site:current-user:field-lastname]\\r\\nTitle: [node:title]\\r\\nURL: [node:url]\\r\\nLink for editing: [node:edit-url]\\r\\nSubmitted at [node:changed]\\r\\n\\r\\nHere\\u0027s the teaser:\\r\\n\\r\\n[node:field_teaser]\\r\\n\\r\\nLast moderation notes:\\r\\n[node:log]\\r\\n\\r\\nYou need to do the following:\\r\\n\\r\\nDecide whether this is a \\u0022Promote\\u0022 or \\u0022Capture\\u0022 story AND\\r\\nDecide that it\\u0027s not ready yet: Send back to the author with any notes, set back to Draft status OR\\r\\nDecide that it\\u0027s ready: Publish it\\r\\n\\r\\nEither action will generate an email to the author.\\r\\n\\r\\nKeep it real,\\r\\nLibrary Website",
            "from" : "noreply@ncsu.edu"
          }
        },
        { "drupal_message" : { "message" : "You\\u0027re story has been sent to the Library Story editors, you will be hearing back from them soon.  Thank you!" } }
      ]
    }
  }');
  $items['rules_any_state_to_published'] = entity_import('rules_config', '{ "rules_any_state_to_published" : {
      "LABEL" : "Any state to Published",
      "PLUGIN" : "reaction rule",
      "ACTIVE" : false,
      "OWNER" : "rules",
      "TAGS" : [ "moderation" ],
      "REQUIRES" : [ "workbench_moderation", "rules" ],
      "ON" : { "workbench_moderation_after_moderation_transition" : [] },
      "IF" : [
        { "NOT contents_current_state" : { "node" : [ "node" ], "moderation_state" : "published" } },
        { "contents_previous_state" : { "node" : [ "node" ], "moderation_state" : "published" } }
      ],
      "DO" : [
        { "mail_to_users_of_role" : {
            "roles" : { "value" : { "16" : "16" } },
            "subject" : "New story published to Library Stories!",
            "message" : "Hey,\\r\\n\\r\\nThe story that [site:current-user:field-firstname] [site:current-user:field-lastname] wrote is now live on the website, see:\\r\\n\\r\\nTitle: [node:title]\\r\\nURL: [node:url]\\r\\nLink for editing: [node:edit-url]\\r\\nSubmitted at [node:changed]\\r\\n\\r\\nKeep up the good work,\\r\\nLibrary Website",
            "from" : "noreply@ncsu.edu"
          }
        },
        { "mail" : {
            "to" : [ "node:author:mail" ],
            "subject" : "[node:title] has been published",
            "message" : "Thanks so much for contributing!  Your story is now live on the website.\\r\\n\\r\\nYour story: [node:title]\\r\\nURL: [node:url]\\r\\n\\r\\nBest,\\r\\nLibrary Stories Team",
            "from" : "noreply@ncsu.edu",
            "language" : [ "" ]
          }
        }
      ]
    }
  }');
  $items['rules_story_deleteion'] = entity_import('rules_config', '{ "rules_story_deleteion" : {
      "LABEL" : "Story deleteion",
      "PLUGIN" : "reaction rule",
      "ACTIVE" : false,
      "OWNER" : "rules",
      "TAGS" : [ "moderation" ],
      "REQUIRES" : [ "rules" ],
      "ON" : { "node_delete--project" : { "bundle" : "project" } },
      "DO" : [
        { "mail_to_users_of_role" : {
            "roles" : { "value" : { "16" : "16" } },
            "subject" : "A Library Story was deleted and is now gone forever.\\r\\n",
            "message" : "[node:title] by [node:author] is no more.\\r\\n\\r\\nHopefully this is a good thing.\\r\\n\\r\\n-Library Website",
            "from" : "noreply@ncsu.edu"
          }
        }
      ]
    }
  }');
  return $items;
}
