Rebase pull
===========

A rebase pull pulls changes on the same branch, avoiding a merge commit on merge conflict.

Makes for a cleaner history. 
Here is an outline on how it goes:

- Initial entry by imaginary Developer1
- Developer2 gets the branch with Developer1's intial entry
- A new entry by Developer1 that get's pushed to origin, Developer2 has now idea.
- Initial entry by imaginary Developer2 -- does a `git pull --rebase` and merges to avoid merge commit and clutter - what?

In fact this is what was done on `1stworldprobs a_fature_branch` in the first few commits.

Summary
-------

| Developer 1          | Developer 2                                     | Time|
| -------------------- | ----------------------------------------------- |:---:|
| `co -b branch`       |                                                 |  ↓  |
| `ci -m 1`            |                                                 |     |
| `push origin branch` |                                                 |     |
|                      | `fetch; co branch`                              |     |
| `ci -m 2a`           |                                                 |     |
| `push origin branch` |                                                 |     |
|                      | `ci -m 2b`                                      |     |
|                      | `push origin branch` (fails: conflict with 2a ) |     |
|                      | `pull --rebase` (avoid merge commit)            |     |
|                      | `mergetool` (resolve conflict...)               |     |
|                      | `add <changed_files>...`                        |     |
|                      | `rebase --continue`                             |     |
|                      | `push origin branch`                            |     |

These are all git commants (`co` = checkout, `ci` = commit).
